/*************************
* CMP_SC 1050
* FS 2022
* Lab 5
* Meredith Payne (MAPCPX)
* October 6, 2022
*************************/

#include <stdio.h>
#include <math.h>

int main (void)
{
    //arrays
    int array1[50];
    int array2[50];
    int product[50];
    //counters
    int counter1 = 1;
    int counter2 = 0;
    //totals
    int totalEven1 = 0;
    int totalOdd1 = 0;
    int totalEven2 = 0;
    int totalOdd2 = 0;
    //averages
    float averageEven1 = 0;
    float averageOdd1 = 0;
    float averageEven2 = 0;
    float averageOdd2 = 0;

    //Array 1 initializer
    printf("Array 1 Elements: \n");
    for (int i = 0; i <= 49; i++)
    {
        //sets array at i equal to the counter
        array1[i] = counter1;
        //prints the array element and its value
        if(i < 49)
        {
            printf("array1[%d] = %d, ", i, array1[i]);
        }
        else
        {
            printf("array[%d] = %d", i, array1[i]);
        }
        //for calculating totals odd and even
        if(i % 2 != 0)
        {
            totalOdd1 += array1[i];
        }
        else if(i % 2 == 0)
        {
            totalEven1 += array1[i];
        }
        //increases counter by 2
        counter1 += 2;
    }
    printf("\n\n");
    //calculating averages for first array
    averageOdd1 = totalOdd1 / 25.0;
    averageEven1 = totalEven1 / 25.0;

    //Array 2 initializer
    printf("Array 2 Elements: \n");
    for (int i = 0; i <= 49; i++)
    {
        //sets array at i equal to the counter
        array2[i] = counter2;
        //prints the array element and its value
        if(i < 49)
        {
            printf("array2[%d] = %d, ", i, array2[i]);
        }
        else
        {
            printf("array2[%d] = %d", i, array2[i]);
        }
        //for calculating totals odd and even
        if(i % 2 != 0)
        {
            totalOdd2 += array2[i];
        }
        else if(i % 2 == 0)
        {
            totalEven2 += array2[i];
        }
        //increases counter by 2
        counter2 += 2;
    }
    printf("\n\n");
    //calculating averages for second array
    averageOdd2 = totalOdd2 / 25.0;
    averageEven2 = totalEven2 / 25.0;

    //printing totals/averages
    printf("Total of array1 even elements = %d, average = %0.2f\n", totalEven1, averageEven1);
    printf("Total of array1 odd elements = %d, average = %0.2f\n", totalOdd1, averageOdd1);
    printf("Total of array2 even elements = %d, average = %0.2f\n", totalEven2, averageEven2);
    printf("Total of array2 odd elements = %d, average = %0.2f\n\n", totalOdd2, averageOdd2);

    //printing product array
    for (int i = 0; i <= 49; i++)
    {
        //sets value at product[i] to the product of array1 and 2 values at i
        product[i] = array1[i] * array2[i];
        //prints result
        if(i < 49)
        {
            printf("product[%d] = %d, ", i, product[i]);
        }
        else
        {
            printf("product[%d] = %d", i, product[i]);
        }
    }
    printf("\n");
}