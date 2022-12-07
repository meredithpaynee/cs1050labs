#include <stdio.h>

int main (void)
{
    int a, b, c, d;
    int sum, product, quotient, remainder, comp;

    /*user inputs the values for a b c and d*/
    printf("Enter 4 integers (A, B, C, D) separated by spaces: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    /*print values of a b c and d*/
    printf("*** Initial Values ***\n");
    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
    /*calcuated values */
    printf("*** Calculated Values ***\n");
    /*sum of b and c variable and print*/
    sum = b + c;
    printf("The sum of b and c = %d\n", sum);
    /*product of a and d variable and print*/
    product = a * d;
    printf("The product of a and d = %d\n", product);
    /*quotient of a and c variable and print*/
    quotient = a / c;
    printf("The integer quotient of a divided by c = %d\n", quotient);
    /*remainder of c and d variable and print*/
    remainder = c % d; 
    printf("The integer remainder of c divided by d = %d\n", remainder);
    /*product of a and c divided by sum of b and d variable and print*/
    comp = (a*c)/(b+d);
    printf("The product of a and c divided by the sum of b and d = %d\n", comp);

    
    return 0;
}