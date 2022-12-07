#include <stdio.h>
#include <math.h>



int main(void)
{
    int sum;
    //make sure this is the right way to initialize
    int array[20];
    float average;
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 1; i <= size; i++)
    {
        array[i-1] = i;
        //see if theres something that can replace the i - 1 that actually calls the array(array[])
        printf("array[%d] = %d\n", i - 1, array[i - 1]);
        sum += i;
    }
    average = sum / 20.0;

    printf("Total of all elements = %d\n", sum);
    printf("Average = %.2f\n", average);
}