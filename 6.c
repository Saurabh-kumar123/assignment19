#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20],s[20];
    int i,j,n=0;
    printf("enter a five string\n");
    for(j=0;j<5;j++)
    gets(str[j]);
    printf("palendron string\n");
    for(j=0;j<5;j++)
    {
         strcpy(s,str[j]);
         strrev(s);
     if(strcmp(str[j],s)==0)
    printf("%s\n",str[j]);
    }
    return 0;
}

