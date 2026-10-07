#include <stdio.h>

int main()
{
    float price = 1000;
    float discount = 10;
    float finalPrice;
    int isMember = 1;

    finalPrice = price - (price * discount / 100);

    if (isMember)
    {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    printf("Final Price = %.2f", finalPrice);

    return 0;
}
