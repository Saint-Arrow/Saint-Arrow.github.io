
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
    char *line = NULL;
    size_t line_size = 0;
    int read = 0;
    int value[2]={0,0};
    
    FILE *fp=fopen("./data.conf","rb");
    char *p=NULL;
    if(NULL == fp)
    {
        return 0;
    }
    while ((read = getline(&line, &line_size, fp)) != -1) {
		if (line[0] == 0) {
			continue;
		}
		//printf("%s\n",line);
		
        p = strstr(line, "keya");
		if (NULL != p)
        {
			value[0]=atoi(p+strlen("keya")+1);
		} 

        
        p = strstr(line, "keyb");
		if (NULL != p)
        {
			value[1]=atoi(p+strlen("keyb")+1);
		}

	}
    fclose(fp);
    //注意：Path=/ 需要加，不然提交的cookie网页会获取不到，另外cookie的设置需要在Content-Type之前
    
    printf("Set-Cookie:keya=%d;Path=/\n",value[0]);
    printf("Set-Cookie:keyb=%d;Path=/\n",value[1]);
    printf("Content-Type:text/html;\r\n\r\n");

   
}
