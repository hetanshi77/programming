#include <stdio.h>

int main()
{
    int choice;
    char newTeam[30];

    while(1)
    {
        printf("\n1. View Favorite 3 IPL Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("1. Mumbai Indians\n");
            printf("2. Chennai Super Kings\n");
            printf("3. Royal Challengers Bengaluru\n");
        }
        else if(choice == 2)
        {
            printf("Enter new team: ");
            scanf("%s", newTeam);

            printf("New team added: %s\n", newTeam);
        }
        else if(choice == 3)
        {
            printf("Exiting...");
            break;
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
