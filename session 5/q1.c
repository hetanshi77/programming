#include <stdio.h>
#include <string.h>

int main()
{
    char team[20];

    printf("Enter IPL team: ");
    scanf("%s", team);

    if (strcmp(team, "MI") == 0)
    {
        printf("Go Mumbai Indians!");
    }
    else if (strcmp(team, "CSK") == 0)
    {
        printf("Chennai Super Kings for the win!");
    }
    else if (strcmp(team, "RCB") == 0)
    {
        printf("Go Royal Challengers Bengaluru!");
    }
    else if (strcmp(team, "KKR") == 0)
    {
        printf("Come on Kolkata Knight Riders!");
    }
    else
    {
        printf("Team not found!");
    }

    return 0;
}
