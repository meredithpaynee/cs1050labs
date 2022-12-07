#include <stdio.h>
#include <math.h>

double factorial(int n)
{
    double result = 1;

    for(int i = n; i > 1; i--)
    {
        result *= i;
    }

    return result;
}

double eFunction(double exp)
{
    double e;

    for (int i = 1; i <= 10; i++)
    {
        e += 1/(factorial(i));
    }

    return e;
}

int main(void)
{
    double e = 1;
    e = 1 + eFunction(e);

    for(int i = 1; i <= 5; i++)
    {
        printf("e to the %d power = %.10f\n", i, pow(e, i));
    }
    /*printf("%12.10f\n", eFunction(e));*/
}