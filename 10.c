#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char str[3][2][30]={{"sk2212848@gmail.com","7275488491"},{"saurabh@gmail.com","8922967877"},{"kumar@gmail.com","9935958486"}};
    char username[30],password[20];
    printf("enter username :-  ");
    gets(username);
    printf("enter your password :-  ");
    gets(password);
    int i,flag=0;
    for(i=0;i<3;i++)
    if(strcmp(str[i][0],username)==0&&strcmp(str[i][1],password)==0)
    {
     printf("\n  login  Successful.....!!!!");
     flag=1;
    }
    if(flag!=1)
          printf("\n  invalid username and password...????");
    getch();

}

