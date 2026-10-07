#include <stdio.h>

int main()
{
    int cricketScores[4][2] =
    {
        {180, 165},
        {145, 190},
        {210, 175},
        {160, 155}
    };

    int i, highest;

    for(i = 0; i < 4; i++)
    {
        if(cricketScores[i][0] > cricketScores[i][1])
        {
            highest = cricketScores[i][0];
        }
        else
        {
            highest = cricketScores[i][1];
        }

        printf("Highest score in Match %d = %d\n", i + 1, highest);
    }

    return 0;
}
