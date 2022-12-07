/*************************
* CMP_SC 1050
* FS 2022
* Lab 3
* Meredith Payne (MAPCPX)
* September 9, 2022
*************************/

#include <stdio.h>

int main(void)
{
    /*Ask user for 1 or -1 to make the program count up or down */
    int value;
    printf("Please enter -1 to start at 100 or 1 to start at 1: ");
    scanf("%d", &value);

    /*If the user enters 1, the program will run up from 1*/
    if (value == 1)
    {
        /*runs through numbers*/
        for (int i = 2; i <= 100; i += 2)
        {
            /*tests for multiples of 3 AND 7*/
            if (i % 3 == 0 && i % 7 == 0)
            {
                printf("TS%d ", i);
            }
            /*tests for multiples of 3*/
            else if (i % 3 == 0)
            {
                printf("T%d ", i);
            }
            /*tests for multiples of 7*/
            else if (i % 7 ==0)
            {
                printf("S%d ", i);
            }
            /*catch all for multiples of neither*/
            else
            {
                printf("%d ", i);
            }
        }
        /*new line after program ends*/
        printf("\n");
    }

    /*If the user enters -1, the program will run down from 100*/
    else if (value == -1)
    {
        for (int i = 100; i > 0; i -= 2)
        {
            /*tests for multiples of 3 AND 7*/
            if (i % 3 == 0 && i % 7 == 0)
            {
                printf("TS%d ", i);
            }
            /*tests for multiples of 3*/
            else if (i % 3 == 0)
            {
                printf("T%d ", i);
            }
            /*tests for multiples of 7*/
            else if (i % 7 ==0)
            {
                printf("S%d ", i);
            }
            /*catch all for multiples of neither*/
            else
            {
                printf("%d ", i);
            }
        }
        /*new line after program ends*/
        printf("\n");
    }

    return 0;
}