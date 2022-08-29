#include<stdio.h>
#include<string.h>
int main()
{
     char str[5][20],s[20],r[20];
     int i,index,x1=-1,x2=-1;
     printf("enter a 5 string\n");
     for(i=0;i<5;i++)
          gets(str[i]);
     printf("enter a two word for using this string get find between space\n");
     gets(s);
     printf("enter second word\n");
     gets(r);
     for(i=0;i<5;i++)
     {
          if(strcmp(str[i],s)==0)
               x1=i;
          if(strcmp(str[i],r)==0)
               x2=i;
     }
               if(x1!=-1&&x2!=-1)
               {if((x2-x1)>0)
               printf("distance is  %d",(x2-x1)-1);
               else
                 printf("distance is  %d",(x1-x2)-1);
               }
               else
                    printf("string not found\n");
      return 0;
}
