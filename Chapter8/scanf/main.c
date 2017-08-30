#include <stdio.h>

int main()
{
    char firstInitial;
    char lastInitial;
    int age;
    int favoriteNumber;

    printf("What letter does your first name begin with?\n");
    scanf(" %c", &firstInitial);

    printf("What letter does your last name begin with?\n");
    scanf(" %c", &lastInitial);

    printf("How old are you? ");
    scanf(" %d", &age);

    printf("What is your favorite integer? ");
    scanf(" %d", &favoriteNumber);

    printf("\nYour initials are %c.%c. and you are %d years old",
            firstInitial, lastInitial, age);
    printf("\nYour favorite number is %d.\n\n", favoriteNumber);

    return 0;
}
