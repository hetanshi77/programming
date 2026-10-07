#include <stdio.h>


void addToCart(char cart[][30], int *count, char product[])
{
    strcpy(cart[*count], product);
    (*count)++;

    printf("Updated Cart:\n");

    for(int i = 0; i < *count; i++)
    {
        printf("%s\n", cart[i]);
    }
}

int main()
{
    char cart[10][30] = {"Mobile", "Headphones"};
    int count = 2;

    addToCart(cart, &count, "Laptop");

    return 0;
}
