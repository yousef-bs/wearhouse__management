#include <stdio.h>
#include <string.h>
#include <conio.h>

void main_menu()
{
   int m;
   printf("1.New product registration section : \n");
   printf("2.Register products for the warehouse : \n");
   printf("3.product out of the warehouse registration section : \n");
   printf("4.Reports section : \n");
   printf("5.Settings section : \n");
   printf("6.Exit the user area : \n");
   printf("7.Return to the login page : \n");

   printf("------------------------------------\n");

    printf("please enter your choice *_* \n");
    scanf("%d" , &m);

switch(m)
    {
        case 1:
            product();
            break;

//        case 2:
//            Register_products_for_the_warehouse();
//            break;
//
//        case 3:
//            product_out_of_the_warehouse_registration_section();
//            break;
//
//        case 4:
//            Reports_section();
//            break;
//
//        case 5:
//            Settings_section();
//            break;
//
//        case 6:
//            Exit_the_user_area();
//            break;
//        case 7:
//            main();
//            break;

    }

}
