#include <stdio.h>

int main()
{
    float amount, discount, finalAmount;

    printf("Enter total cart amount: ");
    scanf("%f", &amount);

    if(amount > 2000)
    {
        discount = amount * 20 / 100;
        finalAmount = amount - discount;
    }
    else
    {
        if(amount > 1000)
        {
            discount = amount * 10 / 100;
            finalAmount = amount - discount;
        }
        else
        {
            finalAmount = amount;
        }
    }

    printf("Final Amount = %.2f", finalAmount);

    return 0;
}
