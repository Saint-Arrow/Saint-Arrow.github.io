
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
    char *form_len=getenv("CONTENT_LENGTH");
    char keya[50]="",keyb[50]="";
    char buf[1024];
    printf("Content-Type:text/html;\r\n\r\n");
    printf("hello world\n");

     int lenstr=atoi(form_len);
     if(0 == lenstr)
    {
        return 0;
    }
     char *info=(char *)malloc(lenstr+1);
     fread(info,1,lenstr,stdin);
    
    printf("form:%s form_len:%s\n",info,form_len);
    #if 1
    sscanf(info,"keya=%[^&]&keyb=%s",keya,keyb);
    FILE *fp=fopen("./data.conf","w");
    snprintf(buf,sizeof(buf)-1,"keya=%s\nkeyb=%s\n",keya,keyb);
    fwrite(buf,strlen(buf),1,fp);
    fclose(fp);
    #endif

}
