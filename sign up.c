#include <stdio.h>
#include <string.h>

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

    printf("Please enter your user name : ");
    scanf("%s", log.username);

    printf("Please enter your name : ");
    scanf("%s", log.name);

    printf("Please enter your surname : ");
    scanf("%s", log.surname);

    printf("Please enter your the_ID_number : ");
    scanf("%s", log.the_ID_number);


    while(strlen(log.the_ID_number)!= 10)
        {
            printf("The entered value is incorrect.. Please enter the_ID_number again : ");
            scanf("%s", log.the_ID_number);
        }

    printf("Please enter your mobile number : ");
    scanf("%s", log.mobileNumber);


    while(strlen(log.mobileNumber) != 11)
        {
            printf("The number you entered is incorrect.. Please enter the number correctly : ");
            scanf("%s", log.mobileNumber);
        }

    printf("Please enter your email : ");
    scanf("%s", log.email);

    printf("Please enter your password : ");
    scanf("%s", log.password);

    printf("Please Verify the password : ");
    scanf("%s", log.Verify_the_password);


    while(strcmp(log.password, log.Verify_the_password) != 0)
        {
            printf("Passwords don't match..!! Please enter your password again ^_^ ");
            scanf("%s", log.password);
            printf("Please Verify the password : ");
            scanf("%s", log.Verify_the_password);
        }


    FILE *fp;
    fp = fopen("users.txt", "a");
    fprintf(fp, "Username : %s\nName : %s\nsurname : %s\nthe_ID_number : %s\nMobile Number : %s\nEmail : %s\n",
            log.username, log.name, log.surname, log.the_ID_number, log.mobileNumber, log.email);
    fclose(fp);

    printf("Your account has been successfully registered..welcome :-D \n");

}


