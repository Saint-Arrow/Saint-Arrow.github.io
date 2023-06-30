
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
    //printf("Content-Type:text/html;\r\n\r\n");
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
    printf("keya=%d&keyb=%d\n",value[0],value[1]);

}
