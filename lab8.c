/*************************
* CMP_SC 1050
* FS 2022
* Lab 8
* Meredith Payne (MAPCPX)
* October 21, 2022
*************************/

#include <stdio.h>

void getIntArray(int * outputArray, int * count);
void printArray(int * array, int count);
int totalArray(int * array, int count);
double avgArray(int * array, int count);
int totalBothArrays(int * array, int * array2, int count, int count2);
float avgBothArrays(int * array, int * array2, int count, int count2);

int main(void)
{
    //setting length
    int length = 10;
    int length2 = 10;

    int array[length];
    int array2[length2];

    printf("\n****************************************\n");
    printf("**********Welcome to Lab 8**********\n");
    printf("****************************************\n\n");

    getIntArray(array, &length);
    printArray(array, length);
    printf("Total of array = %d\n", totalArray(array, length));
    printf("Average of array = %.3f\n", avgArray(array, length));
    printf("*********************\n");
    
    getIntArray(array2, &length2);
    printArray(array2, length2);
    printf("Total of array = %d\n", totalArray(array2, length2));
    printf("Average of array = %.3f\n", avgArray(array2, length2));
    printf("*********************\n");

    printf("*********************\n");
    printf("Total of both arrays = %d", totalBothArrays(array, array2, length, length2));
    printf("\nAverage of both arrays = %.3f\n", avgBothArrays(array, array2, length, length2));
    printf("*********************\n");

}

//sets array with the element values
void getIntArray(int * outputArray, int * count)
{
    printf("Enter the number of elements in the array: ");
    scanf("%d", count);
    for (int i = 0; i < *count; i++)
    {
        printf("Enter element #%d: ", i);
        scanf("%d", &outputArray[i]);
        printf("%d\n", outputArray[i]);
    }
}

//prints out elements values
void printArray(int * array, int size)
{
    printf("\n\nHere are the %d elements of your array:\n", size);
    for(int i = 0; i < size; i++)
    {
        printf("\tElement %d = %d\n", i, array[i]);
    }
}

//adds up all the elements
int totalArray(int * array, int count)
{
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total += array[i];
    }
    return total;
}

//averages the elements
double avgArray(int *array, int count)
{
    float total = 0;
    for (int i = 0; i < count; i++)
    {
        total += array[i];
    }
    return total/count;
}

//adds up the total of two arrays
int totalBothArrays(int * array, int * array2, int count, int count2)
{
    int total = 0;
    int total2 = 0;
    for (int i = 0; i < count; i++)
    {
        total += array[i];
    }

    for (int i = 0; i < count2; i++)
    {
        total2 += array2[i];
    }
    return total + total2;
}

//averages the total of two arrays 
float avgBothArrays(int * array, int * array2, int count, int count2)
{
    float total = 0;
    float total2 = 0;
    for (int i = 0; i < count; i++)
    {
        total += array[i];
    }

    for (int i = 0; i < count2; i++)
    {
        total2 += array2[i];
    }
    return (total + total2) / (count + count2);
}