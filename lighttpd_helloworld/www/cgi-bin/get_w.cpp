
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>
#include <netdb.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>
#include <math.h>
#include <wchar.h>
#include <netinet/tcp.h>
//#include <lighttpd/base.h>
#include <iostream>
using namespace std;;



int main()
{
    /**
     * http://192.168.1.191:8088/cgi-bin/get_w.cgi?keya=1&keyb=2
     * form的内容以明文的方式放在url中，用QUERY_STRING来获取内容，但是url有长度限制，所以只适用于少量数据，数据多的话使用post方法
    */
   #if 0
   const char* cookie_name = "my_cookie";
    const char* cookie_value = "cookie_value";
    
    server *srv = server_init();
    connection *con = connection_init(srv);
    response_header_overwrite(srv, con, "Set-Cookie", cookie_name, cookie_value, strlen(cookie_value));
    
    // 其他处理响应的代码...
    
    connection_close(srv, con);
    server_free(srv);
   #else
    char *form=getenv("QUERY_STRING");
    char keya[50]="",keyb[50]="";
    char buf[1024];
    printf("Content-Type:text/html;\r\n\r\n");
    //printf("Set-Cookie: name='1';expires=Wed, 28 Aug 2024 18:30:00 GMT\n");

    printf("<html>");
    printf("<head>");
    printf("<title>hide</title>");

    printf("</head>");

    printf("<body>");
    printf("</body>");

    printf("</html>");
    if(NULL == form)
    {
        return 0;
    }
    //printf("form:%s\n",form);
    sscanf(form,"keya=%[^&]&keyb=%s",keya,keyb);
    
    FILE *fp=fopen("./data.conf","w");
    snprintf(buf,sizeof(buf)-1,"keya=%s\nkeyb=%s\n",keya,keyb);
    fwrite(buf,strlen(buf),1,fp);
    fclose(fp);
    #endif

}
