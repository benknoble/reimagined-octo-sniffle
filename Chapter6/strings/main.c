//for printf
#include <stdio.h>
// for strcpy
#include <string.h>

int main()
{
    char kid1[12];
    char kid2[] = "Maddie";
    char kid3[7] = "Andrew";

    char hero1[] = "Batman";
    char hero2[34] = "Spiderman";
    char hero3[25];

    kid1[0] = 'K';
    kid1[1] = 'a';
    kid1[2] = 't';
    kid1[3] = 'i';
    kid1[4] = 'e';
    kid1[5] = '\0';

    strcpy(hero3, "The Incredible Hulk");

    printf("%s\'s favorite hero is %s.\n", kid1, hero1);
    printf("%s\'s favorite hero is %s.\n", kid2, hero2);
    printf("%s\'s favorite hero is %s.\n", kid3, hero3);

    return 0;
}
