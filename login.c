#include <stdio.h>
#include <string.h>
#include <conio.h>

struct login {
   char username[100];
   char name[100];
   char surname[100];
   char the_ID_number[100];
   char mobileNumber[100];
   char email[100];
   char password[100];
   char Verify_the_password[100];
}log;


void log_in()
{
    char username[20];
    char password[20];

    printf("Enter your username?:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);

    FILE *fp;
    fp = fopen("Accounts.txt", "r");

    do
    {
        fread (&log, sizeof(struct login), 1, fp);

        if((strcmp(username,log.username)==0) && (strcmp(password,log.password)==0))
         {
             printf("\nWelcome Login Success!\n");
              break;
         }
        else
          {
                printf("\n!!~wrong password~!! :( \n~~~Please re-enter your information again ^_~\n");
                log_in();

          }


    }while(!feof);


}
