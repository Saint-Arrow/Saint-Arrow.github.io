
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

const string ENV[ 24 ] = {                 
        "COMSPEC", "DOCUMENT_ROOT", "GATEWAY_INTERFACE",   
        "HTTP_ACCEPT", "HTTP_ACCEPT_ENCODING",             
        "HTTP_ACCEPT_LANGUAGE", "HTTP_CONNECTION",         
        "HTTP_HOST", "HTTP_USER_AGENT", "PATH",            
        "QUERY_STRING", "REMOTE_ADDR", "REMOTE_PORT",      
        "REQUEST_METHOD", "REQUEST_URI", "SCRIPT_FILENAME",
        "SCRIPT_NAME", "SERVER_ADDR", "SERVER_ADMIN",      
        "SERVER_NAME","SERVER_PORT","SERVER_PROTOCOL",     
        "SERVER_SIGNATURE","SERVER_SOFTWARE" }; 

int main()
{
    /**
     * https://blog.csdn.net/Alright_Well/article/details/68486072
     * 注意下划线
     * https://www.runoob.com/cplusplus/cpp-web-programming.html
     */
    #if 0
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
    printf("DOMAIN_NAME %s\n",getenv("DOMAIN_NAME"));printf("<br>");
    #else
    cout << "Content-type:text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title>CGI 环境变量</title>\n";
   cout << "</head>\n";
   cout << "<body>\n";
   cout << "<table border = \"0\" cellspacing = \"2\">";
 
   for ( int i = 0; i < 24; i++ )
   {
       cout << "<tr><td>" << ENV[ i ] << "</td><td>";
       // 尝试检索环境变量的值
       char *value = getenv( ENV[ i ].c_str() );  
       if ( value != 0 ){
         cout << value;                                 
       }else{
         cout << "环境变量不存在。";
       }
       cout << "</td></tr>\n";
   }
   cout << "</table><\n";
   cout << "</body>\n";
   cout << "</html>\n";
   
   return 0;
    #endif
    
}
