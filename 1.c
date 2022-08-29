#include<stdio.h>
int main()
{
    char str[5][20];
    int i,j,count=0;
    printf("enter a five string\n");
    for(i=0;i<5;i++)
    gets(str[i]);
    for(i=0;i<5;i++)
    {
        for(j=0;str[i][j];j++)
       if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'||
       str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U')
       count++;
       printf("%s -> %d\n",str[i],count);
       count=0;
    }
    
}