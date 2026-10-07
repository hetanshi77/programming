#include <stdio.h>

int main()
{
    const float GST = 18.0;
    float basePrice = 1000;
    float gstAmount;
    float finalPrice;

    gstAmount = basePrice * GST / 100;
    finalPrice = basePrice + gstAmount;

    printf("Base Price: %.2f\n", basePrice);
    printf("GST: %.2f%%\n", GST);
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}
