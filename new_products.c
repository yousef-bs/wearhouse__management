#include <stdio.h>
#include <string.h>

struct new_products {
   char name_product[50];
   char Product_brand[50];
   char Product_model[50];
   char Product_price[100];
   char Product_explanations[100];
   char Product_coding[50];
}products;

void product()
{

    printf("enter your name_product : ");
    scanf("%s", products.name_product);

    printf("enter Product_brand : ");
    scanf("%s", products.Product_brand);

    printf("enter your Product model : ");
    scanf("%s", products.Product_model);

   printf("enter the Product_price : ");
    scanf("%s", products.Product_price);


    printf("enter Product_explanations : ");
    scanf("%s", products.Product_explanations);


    printf("enter Product_coding : ");
    scanf("%s", products.Product_coding);


    FILE *fp;
    fp = fopen("products_file.txt", "a");
    fprintf(fp, "name_product : %s\nProduct_brand : %s\nProduct_model : %s\nProduct_price : %s\nProduct_explanations : %s\nProduct_coding : %s\n",
            products.name_product, products.Product_brand, products.Product_model, products.Product_price, products.Product_explanations, products.Product_coding);
    fclose(fp);
    printf("--------------------------------\n");

}


