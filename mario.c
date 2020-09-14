// My Mario More Program.
#include <stdio.h>
#include <cs50.h>

// Declare a get_height function.
int get_height(void);

int main(void)
{
    // Get the height of the pyramids from the user.
    int height = get_height();
    /* Loop from 1 through the value of height provide the number of
     * hashes and spaces for each row.
     */
    for (int i = 1; i <= height; i++)
    {
        /* The pyramids are built using three nested loops.
         * The first loop calculates the amount of space to add before the first hash.
         * The second loop takes the current value of the outer loop variable (i) and
         * uses it to print the hashes.
         * The space between the two pyramids is inserted after the second nested loop.
         * The third nested loop build the right pyramids and uses the default left align
         * ordering and the outer loop variable (i).
         * Outer loop end each row after in nested loops exit.
         */
        int space = (height - i);
        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }

        printf("  ");

        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

/* Get height value from the user while limiting the
 * value to an integer between 1 and 8 inclusive.
 * If returned value does not match the above condition,
 * prompt the user again until correct value is returned.
 */

int get_height(void)
{
    // Initialize n variable.
    int n;
    do
    {
        n = get_int("Enter a height for the pyramids between 1-8: ");
    }
    while (n < 1 || n > 8);

    return n;
}
