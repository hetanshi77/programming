#include <stdio.h>

int calculateTotal(int itemPrice, int quantity)
{
    return itemPrice * quantity;
}

int main()
{
    int itemPrice = 500;
    int quantity = 3;

    printf("Total Bill = %d", calculateTotal(itemPrice, quantity));

    return 0;
}
