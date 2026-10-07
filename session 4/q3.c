#include <stdio.h>

int isEligibleForOffer(int age, int orderValue)
{
    return age >= 18 && orderValue > 500;
}

int main()
{
    int age = 20;
    int orderValue = 700;

    printf("Eligible for Offer = %d",
           isEligibleForOffer(age, orderValue));

    return 0;
}
