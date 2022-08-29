#include<stdio.h>
#include<string.h>
int fact(int);
int main()
{
     char str[10][20],s[20];
     int i,x;
     printf("enter a 10 string\n");
     for(i=0;i<10;i++)
          gets(str[i]);
          printf("enter a string find the factorial\n");
          gets(s);
          for(i=0;i<10;i++)
          if(strcmp(str[i],s)==0)
           x=i+1;
          printf("factorial is  %d",fact(x));
          return 0;
}
 int fact(int n)
 {
      int i,t=1;
      for(i=1;i<=n;i++)
       t=t*i;
      return t;
 }
