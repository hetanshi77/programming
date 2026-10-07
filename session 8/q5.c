#include <stdio.h>


void capitalizeFirstLetter(char str[])
{
    if(str[0] != '\0')
    {
        str[0] = toupper(str[0]);
    }

    printf("%s\n", str);
}

int main()
{
    char product[] = "mobile";
    char username[] = "hetanshi";

    capitalizeFirstLetter(product);
    capitalizeFirstLetter(username);

    return 0;
}
