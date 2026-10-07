#include <stdio.h>

int main()
{
    char productName[] = "Mobile";
    float price = 25000.50;
    double rating = 4.5;

    printf("Product Name: %s (String)\n", productName);
    printf("Price: %.2f (Float)\n", price);
    printf("Rating: %.1lf (Double)\n", rating);

    return 0;
}
