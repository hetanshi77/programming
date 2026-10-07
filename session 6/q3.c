#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char songs[3][30] = {
        "Kesariya",
        "Tum Hi Ho",
        "ShapeOfYou"
    };

    char guess[30];
    int randomSong;

    srand(time(0));

    randomSong = rand() % 3;

    do
    {
        printf("Guess the song: ");
        scanf("%s", guess);

        if(strcmp(guess, songs[randomSong]) == 0)
        {
            printf("Correct! You guessed the song!\n");
        }
        else
        {
            printf("Wrong guess! Try again.\n");
        }

    } while(strcmp(guess, songs[randomSong]) != 0);

    return 0;
}
