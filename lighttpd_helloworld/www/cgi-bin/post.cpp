
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

#include <iostream>
using namespace std;;



int main()
{
    
    char *form=getenv("QUERY_STRING");
    char *form_len=getenv("CONTENT_LENGTH");
    char keya[50]="",keyb[50]="";
    char buf[1024];
    printf("Content-Type:text/html;\r\n\r\n");
    printf("hello world\n");

    
    if(NULL == form)
    {
        return 0;
    }
    printf("form:%s form_len:%s\n",form,form_len);
    #if 0
    sscanf(form,"keya=%[^&]&keyb=%s",keya,keyb);
    FILE *fp=fopen("./data.conf","w");
    snprintf(buf,sizeof(buf)-1,"keya=%s\nkeyb=%s\n",keya,keyb);
    fwrite(buf,strlen(buf),1,fp);
    fclose(fp);
    #endif

}
