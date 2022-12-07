/*************************
* CMP_SC 1050
* FS 2022
* Lab 4
* Meredith Payne (MAPCPX)
* September 16, 2022
*************************/

#include <stdio.h>

int main(void)
{
    /*for loop for numbers 1 through 99*/
    for(int i = 1; i <= 99; i++)
    {
        /*checks the tens place value*/
        switch(i / 10)
        {
            case 1:
                printf("teen");
                break;
            case 2:
                printf("twenty ");
                break;
            case 3:
                printf("thirty ");
                break;
            case 4:
                printf("forty ");
                break;
            case 5:
                printf("fifty ");
                break;
            case 6:
                printf("sixty ");
                break;
            case 7:
                printf("seventy ");
                break;
            case 8:
                printf("eighty ");
                break;
            case 9:
                printf("ninety ");
                break;
        }
        
        /*checks the ones place value (would be remainder of 10)*/
        switch (i % 10)
        {
            case 0:
                printf(", ");
                break;
            case 1:
                printf("one, ");
                break;
            case 2:
                printf("two, ");
                break;
            case 3:
                printf("three, ");
                break; 
            case 4:
                printf("four, ");
                break; 
            case 5:
                printf("five, ");
                break; 
            case 6:
                printf("six, ");
                break; 
            case 7:
                printf("seven, ");
                break; 
            case 8:
                printf("eight, ");
                break; 
            case 9:
                printf("nine, ");
                break; 
        }
    }

    /*for loop for numbers 100 through 199*/
    for (int i = 100; i <= 299; i++)
    {
        /*checks the hundreds place value */
        switch(i / 100)
        {
            case 1:
                printf("one hundred ");
                break;
            case 2:
                printf("two hundred ");
                break;
        }

        /*checks the tens place value (divided by 100) */
        switch((i / 10) % 10)
        {
            case 0:
                printf(" ");
                break;
            case 10:
                printf("teen ");
                break;
            case 20:
                printf("twenty ");
                break;
            case 30:
                printf("thirty ");
                break;
            case 40:
                printf("forty ");
                break;
            case 50:
                printf("fifty ");
                break;
            case 60:
                printf("sixty ");
                break;
            case 70:
                printf("seventy ");
                break;
            case 80:
                printf("eighty ");
                break;
            case 90:
                printf("ninety ");
                break;
        }

        /*checks the ones place value (would be remainder of 10)*/
        switch (i % 10)
        {
            case 0:
                printf(", ");
                break;
            case 1:
                printf("one, ");
                break;
            case 2:
                printf("two, ");
                break;
            case 3:
                printf("three, ");
                break; 
            case 4:
                printf("four, ");
                break; 
            case 5:
                printf("five, ");
                break; 
            case 6:
                printf("six, ");
                break; 
            case 7:
                printf("seven, ");
                break; 
            case 8:
                printf("eight, ");
                break; 
            case 9:
                printf("nine, ");
                break;
        }
    }
}