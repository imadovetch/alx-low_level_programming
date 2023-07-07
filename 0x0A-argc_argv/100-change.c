#include <stdio.h>  /* Standard input/output definitions */

/* The amount to be changed */
int num = 100;

/* The available coins */
int coins[5] = {25, 10, 5, 1};

/* The result variable */
int result = 0;

int main(void)
{
    /* Declare and initialize the j variable */
    int j;
    
    /* Iterate as long as j is less than 5 and num is greater than or equal to 0 */
    for (j = 0; j < 5 && num >= 0; j++)
    {
        /* Loop while num is greater than or equal to coins[j] */
        while (num >= coins[j])
        {
            /* Increment result by 1 */
            result++;
            
            /* Subtract coins[j] from num and store the result in num */
            num = num - coins[j];
        }
    }
    
    /* Print the result */
    printf("%d\n", result);
    
    /* Return 0 to indicate successful program execution */
    return (0);
}

