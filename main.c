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

void main()
{
    int n;
            char username[20];
            char password[20];

    printf("$====== X_X welcome to yousef acconting soft-wear X_X ======$ \n\n");
        printf(" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
        printf(" *-*-*-*-*-*-*-*-*-|| 1.log in ?! ||-*-*-*-*-*-*-*-*-*\n");
        printf(" *-*-*-*-*-*-*-*-*-|| 2.sign up ..||-*-*-*-*-*-*-*-*-*\n");
        printf(" *-*-*-*-*-*-*-*-*-|| 3. Exit -.- ||-*-*-*-*-*-*-*-*-*\n");
        printf(" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");

        printf("~#~#~> type a number:  ");
        scanf("%d", &n);

        switch(n)
        {
            case 1:
                 log_in();
                 system("cls");
                 main_menu();
                 break;


        case 2:
                sign_up();
                 log_in();
                 system("cls");
                 main_menu();
                 system("cls");
                 break;

        case 3:
            {
                printf("good bye :-( ");
            }
             break;



        }
}


