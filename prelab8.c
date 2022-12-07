#include <stdio.h>
#include <math.h>

void getCount(int * outputInt);
void getIntArray(int * outputIntArray, int count);
void printArray(int a[], int size);

int main(void)
{
    //setting length
    int length = 0;
    //intro
    printf("****************************************\n");
    printf("**********Welcome to Prelab 8!**********\n");
    printf("****************************************\n\n");
    //calling function getCount(), &length is location of the variable length and will return the scanf value of outputInt
    getCount(&length);
    //setting variable array[], will be the size of length which has been changed to outputInt value
    int array[length];
    //calling getIntArray() with outputIntArray value equaling the array 
    //(so it will be the same length and set that way) and count equaling to go through for loop
    getIntArray(array, length);
    //calling printArray() with a[] equaling array and length equalling size
    printArray(array, length);
}

void getCount(int * outputInt)
{
    printf("How many integers would you like to enter? ");
    scanf("%d", outputInt);
    printf("\n");

}

void getIntArray(int * outputIntArray, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Enter integer #%d: ", i+1);
        scanf("%d", &outputIntArray[i]);
        printf("%d\n", outputIntArray[i]);
    }
}

void printArray(int a[], int size)
{
    printf("You entered an array with %d elements:\n", size);
    for(int i = 0; i < size; i++)
    {
        printf("\tArray[%d] = %d\n", i, a[i]);
    }
}