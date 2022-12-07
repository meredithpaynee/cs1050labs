#include <stdio.h>
#include <math.h>

long factorial(int n)
{
    long result = 1;

    for(int i = n; i > 1; i--)
    {
        result *= i;
    }

    return result;
}

float eFunction (int n, float x)
{
    float total = 1.0f;
    long factorial = factorial(n);

    for (int i = n - 1; i > 0; --i)
    {
        total = (1 / factorial)(pow(x,n));
    }
}

int main(void)
{
    int n = 10;
    for(int i = 1; i <= 5; i++)
    {
        printf("e to the %d power = %.31f\n", i, eFunction(10, 1.0));
    }
    printf("%12.10f\n", eFunction(4, 1.0));
}
