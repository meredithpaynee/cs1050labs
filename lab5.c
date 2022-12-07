/*************************
* CMP_SC 1050
* FS 2022
* Lab 5
* Meredith Payne (MAPCPX)
* September 30, 2022
*************************/

#include <stdio.h>
#include <math.h>

int Summation(int m, int n);

int main(void)
{
    /*initializing the variables for parameters in function, but need them to increment so I believe i and j are equivalent*/
    int m = -5;
    int n = 5;
    /*variable for function*/
    int f;

    /*for loop incrementing "m" value to print*/
    for (int i = m; i <= n; i++)
    {
        /*for loop incrementing "n" value to print*/
        for (int j = 1; j <= n; j++)
        {
            /*sets f equal to summation function*/
            f = Summation(i,j);
            /*prints the entire statement*/
            printf("Summation of %d through %d squared = %d\n", i, j, f);
        }
    }
}

/*function that calculates the summation of the given values*/
int Summation(int m, int n)
{
    int num = 0;
    /*increments to go between the m and n values (i and j above)*/
    for (int i = m; i <= n; i++)
    {
        /*squares the i value*/
        num += pow(i, 2);
    }
    return num;
}