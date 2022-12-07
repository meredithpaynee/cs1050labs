#include <stdio.h>

void cbv(int x, int y);
void cbr(int * x, int * y);

int main(void)
{
    int a = 3;
    int b = 7;
    cbv(a,b);
    printf("a = %d, b = %d\n", a, b);
    cbr(&a,&b);
    printf("a = %d, b = %d\n", a, b);

}

void cbv(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("x = %d, y = %d\n", x, y);
}

void cbr(int * x, int * y)
{
    int * temp = x;
    x = y;
    y = temp;
    printf("x = %d, y = %d\n", *x, *y);
}