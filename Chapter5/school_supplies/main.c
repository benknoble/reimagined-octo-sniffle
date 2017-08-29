#include <stdio.h>

int main ()
{
    //variables
    char firstInitial;
    char middleInitial;
    int pencils;
    int notebooks;
    float pencilCost = 0.23;
    float notebookCost = 2.89;
    float lunchbox = 4.99;

    //Child 1 {{{
    firstInitial = 'J';
    middleInitial = 'R';

    pencils = 7;
    notebooks = 4;

    printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n",
            firstInitial, middleInitial, pencils, notebooks);
    printf("The total cost is $%.2f\n\n",
            pencils * pencilCost + notebooks * notebookCost + lunchbox);
    // }}}

    //Child 2 {{{
    firstInitial = 'A';
    middleInitial = 'J';

    pencils = 10;
    notebooks = 3;

    printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n",
            firstInitial, middleInitial, pencils, notebooks);
    printf("The total cost is $%.2f\n\n",
            pencils * pencilCost + notebooks * notebookCost + lunchbox);
    // }}}

    //Child 3 {{{
    firstInitial = 'M';
    middleInitial = 'T';

    pencils = 9;
    notebooks = 2;

    printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n",
            firstInitial, middleInitial, pencils, notebooks);
    printf("The total cost is $%.2f\n\n",
            pencils * pencilCost + notebooks * notebookCost + lunchbox);
    // }}}

    return 0;
}
