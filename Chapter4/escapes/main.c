#include <stdio.h>

int main()
{
    printf("Column A\tColumn B\tColumn C");
    printf("\nMy Computer\'s beep sounds like this: \a!\n");
    printf("\"Letz\b\'s fix that typo and then show the backslash ");
    printf("character \\,\" she said\n");

    printf("Quantity\tCost\tTotal\n");
    printf("%d\t\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
    printf("%s %c\n", "You are kicking butt learning", 'C');
    printf("You have finished %.1f%c of the book ", 12.500, '%');
    printf("(that's %%).\n");
}
