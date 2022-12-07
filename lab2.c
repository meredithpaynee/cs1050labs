/**************
* CMP_SC 1050
* FS 2022
* Lab 2
* Meredith Payne (MAPCPX)
* September 2, 2022
**************/

#include <stdio.h>
int main(void)
{
    /*creating variables*/
    int X, Y;
    int product, quotient, comp, remainder, remaindercomp;

    /*user inputs the values for x and y*/
    printf("Please input two numbers (separated by spaces): ");
    scanf("%d %d", &X, &Y);

    /*print values of x and y*/
    printf("X = %d, Y = %d\n", X, Y);

    /*product of X and Y variable (product) and print*/
    product = X * Y;
    printf("X times Y = %d\n", product);

    /*quotient of X and Y variable (quotient) and print*/
    quotient = X / Y;
    printf("X divided by Y = %d\n", quotient);

    /*X plus 1 times Y variable (comp) and print*/
    comp = (X + 1) * Y; 
    printf("X plus 1 quantity times Y = %d\n", comp);

    /*remainder of quotient X and Y variable (remainder) and print*/
    remainder = X % Y;
    printf("Remainder of X divided by Y = %d\n", remainder);

    /*remainder of Y plus 1 quantity divided by X variable (remaindercomp) and print*/
    remaindercomp = (Y +1) % X;
    printf("Remainder of Y plus 1 quantity divided by X = %d\n", remaindercomp);
    
    /*print values again to show no change*/
    printf("X = %d, Y = %d\n", X, Y);

    return 0;
}