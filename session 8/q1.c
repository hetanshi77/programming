#include <stdio.h>

void getUserInitials(char name[])
{
    printf("Initials: %c%c", name[0], name[6]);
}

int main()
{
    char name[] = "Virat Kohli";

    getUserInitials(name);

    return 0;
}
