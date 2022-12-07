#include <stdio.h>
int main(void)
{
    int value;
    printf("What number would you like to test up to? ");
    scanf("%d", &value);
    
    /*set counter*/
    for (int integer = 1; integer < value + 1; integer++)
    {
        /*check for multiples of three and five*/
        if (integer % 3 == 0 && integer % 5 ==0)
        {
            printf("Fizz Buzz");
        }
        /*check for only three*/
        else if (integer % 3 == 0)
        {
            printf("Fizz");
        }
        /*check for only 5*/
        else if (integer % 5 == 0)
        {
            printf("Buzz");
        }
        else
        {
            printf("%d", integer);
        }

        /*check if comma is needed and print*/
        if (integer < value)
        {
            printf(", ");
        }

    }
    /*new line at very end of program*/
    printf("\n");
    
    return 0;
}