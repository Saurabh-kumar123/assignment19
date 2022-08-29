#include<stdio.h>
#include<string.h>
int main()
{
    char str[2][5][20];
    int i,j;
    printf("enter a 10 string\n");
    for(i=0;i<2;i++)
    for(j=0;j<5;j++)
    gets(str[i][j]);
    for(i=0;i<2;i++)
    {
    for(j=0;j<5;j++)
    printf("%s  ",str[i][j]);
    printf("\n");
    }
    return 0;
}
