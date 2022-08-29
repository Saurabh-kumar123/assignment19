#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20],s[20];
    int i,j,n=0;
    printf("enter a five valid email id\n");
    for(j=0;j<5;j++)
    gets(str[j]);
    printf("valid email address\n");
    for(j=0;j<5;j++)
     if(strchr(str[j],'@')!=0)
    printf("%s\n",str[j]);
    return 0;
}

