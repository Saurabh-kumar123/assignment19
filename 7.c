#include<stdio.h>
#include<string.h>
int main()
{
     char ip[20];
     int count=0;
     printf("enter a IP address\n");
     gets(ip);
     char *s=strtok(ip,".");
     while(s!=NULL)
     {
          int x = atoi(s);
          if(x>0&&x<=255)
               count++;
          s = strtok(NULL,".");
     }
     if(count==4)
          printf("It is valid IP address........");
     else
          printf("It is not valid IP address....??????");
     return 0;
}
