#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20],s[20];
    int i,j,n=0;
    printf("enter a 5 string\n");
    for(j=0;j<5;j++)
    gets(str[j]);
    printf("enter a find string\n");
    gets(s);
    for(j=0;j<5;j++)
     if(strcmp(str[j],s)==0)
     {  n=1;
    printf("string found");
     break;
     }
     if(n==0)
    printf("string not found");
    return 0;
}

