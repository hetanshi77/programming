#include <stdio.h>

float calculateAverage(int orders[])
{
    int sum = 0;
    int i;

    for(i = 0; i < 7; i++)
    {
        sum = sum + orders[i];
    }

    return sum / 7.0;
}

int main()
{
    int orders[7] = {200, 350, 150, 400, 250, 300, 450};

    float average;

    average = calculateAverage(orders);

    printf("Average Weekly Spend = %.2f", average);

    return 0;
}
