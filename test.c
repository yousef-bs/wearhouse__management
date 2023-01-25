
#include <stdio.h>
#include <string.h>
#include <conio.h>


void main()
{
    char username[20];
    char password[20];

    printf("Enter your username:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);

    if(strcmp(username,username)==0)
     {
        if(strcmp(password,password)==0)
         {

             printf("\nWelcome Login Success!");
         }
        else
        {
             printf("\nwrong password");
        }
    }
    else
    {
       printf("\nUser doesn't exist");
    }

}
