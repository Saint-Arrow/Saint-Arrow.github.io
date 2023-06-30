
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
    /**
     * https://blog.csdn.net/Alright_Well/article/details/68486072
     * 注意下划线
     */
    printf("Content-Type:text/html;\r\n\r\n");
    printf("hello world\n");

    printf("SERVER_NAME %s\n",getenv("SERVER_NAME"));printf("<br>");
    printf("SEUVER_INTERFACE %s\n",getenv("SEUVER_INTERFACE"));printf("<br>");
    printf("SERVER_PROTOCOL %s\n",getenv("SERVER_PROTOCOL"));printf("<br>");
    printf("SERVER_PORT %s\n",getenv("SERVER_PORT"));printf("<br>");
    printf("HTTP_ACCEPT %s\n",getenv("HTTP_ACCEPT"));printf("<br>");
    printf("<br>");

    printf("HTTP_REFERER %s\n",getenv("HTTP_REFERER"));printf("<br>");
    printf("HTTP_USER_AGENT %s\n",getenv("HTTP_USER_AGENT"));printf("<br>");
    printf("GETWAY_INTERFACE %s\n",getenv("GETWAY_INTERFACE"));printf("<br>");
    printf("PATH_TRANSLATED %s\n",getenv("PATH_TRANSLATED"));printf("<br>");
    printf("PATH_INFO %s\n",getenv("PATH_INFO"));printf("<br>");
    printf("<br>");

    printf("SCRIPT_NAME %s\n",getenv("SCRIPT_NAME"));printf("<br>");
    printf("QUERY_STRING %s\n",getenv("QUERY_STRING"));printf("<br>");
    printf("REMOTE_NOST %s\n",getenv("REMOTE_NOST"));printf("<br>");
    printf("REMOTE_ADDR %s\n",getenv("REMOTE_ADDR"));printf("<br>");
    printf("REMOTE_USBR %s\n",getenv("REMOTE_USBR"));printf("<br>");
    printf("<br>");

    printf("CONTENT_TYPE %s\n",getenv("CONTENT_TYPE"));printf("<br>");
    printf("CONTENT_LENGTH %s\n",getenv("CONTENT_LENGTH"));printf("<br>");
}
