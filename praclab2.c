#include <stdio.h>
#include <math.h>


//LAB 5
/*int summation(int m, int n);

int main(void)
{
    //int m = -5;
    //int n = 5;
    //int f;
    for (int i = -5; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            printf("Summation of %d through %d squared = %d\n", i, j, summation(i,j));
        }
    }
}

int summation(int m, int n)
{
    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        sum += i*i;
    }
    return sum;
}*/



//LAB 6

/*void printArray(int a[], int start);
int totalEvenArray(int a[]);
int totalOddArray(int a[]);

int main (void)
{
    int a[50];
    int b[50];

    printArray(a, 1);
    printf("Total of array1 odd elements = %d\n", totalOddArray(a));
    printf("Total of array1 even elements = %d\n", totalEvenArray(a));
    printArray(b, 0);
    printf("Total of array2 odd elements = %d\n", totalOddArray(b));
    printf("Total of array2 even elements = %d\n", totalEvenArray(b));
}

void printArray(int a[], int start)
{
    for (int i = 0; i < 50; i++)
    {
        a[i] = start;
        printf("array[%d] = %d\n", i, start);
        start += 2;
    }
}

int totalEvenArray(int a[])
{
    //int size = sizeof(&a)/sizeof(a[0]);
    int total;
    for (int i = 0; i < 50; i++)
    {
        if (a[i] / 2 == 0)
        {
            total += a[i];
        }
    }
    return total;
}

int totalOddArray(int a[])
{
    //int size = sizeof(&a)/sizeof(a[0]);
    int total;
    for (int i = 0; i < 50; i++)
    {
        if (a[i] / 2 != 0)
        {
            total += a[i];
        }
    }
    return total;
}*/

//LAB 7
/*void printArray(int a[][3], int r);
void printLetterGrades(int a[][3], int b[][3]);

int main(void)
{
    int a[12][3] = {{72, 68, 62}, {95, 88, 95}, {93, 97, 86}, {98, 77, 98}, {99, 92, 90}, {47, 32, 27}, 
    {97, 99, 75}, {85, 95, 91}, {96, 91, 99}, {94, 90, 74}, {98, 98, 90}, {76, 82, 98}};
    int curve[4][3] = {{85, 90, 90}, {75, 80, 75}, {60, 70, 55}, {50, 60, 40}};

    printf("Scores:\n");
    printArray(a, 12);

    printf("Grade Cutoffs:\n");
    printArray(curve, 4);

    printf("Letter Grades:\n");
    printLetterGrades(a, curve);
}

void printArray(int a[][3], int r)
{
    for (int i = 0; i < r; i++)
    {
        printf("Row %d: ", i);
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void printLetterGrades(int a[][3], int b[][3])
{
    for (int i = 0; i < 12; i++)
    {
        printf("Student %d: ", i);
        for (int j = 0; j < 3; j++)
        {
            if(a[i][j] <= 100 && a[i][j] >= b[0][j])
            {
                printf("A ");
            }
            else if(a[i][j] < b[0][j] && a[i][j] >= b[1][j])
            {
                printf("B ");
            }
            else if(a[i][j] < b[1][j] && a[i][j] >= b[2][j])
            {
                printf("C ");
            }
            else if(a[i][j] < b[2][j] && a[i][j] >= b[3][j])
            {
                printf("D ");
            }
            else if(a[i][j] < b[3][j])
            {
                printf("F ");
            }
        }
        printf("\n");
    }
    
}*/

//LAB 8

/*void getIntArray(int * outputArray, int * count);
void printArray(int * array, int count);
int totalArray(int * array, int count);
double avgArray(int * array, int count);
double avgTwoArray(int * array, int * array2, int count, int count2);

int main(void)
{
    int length = 10;
    int length2 = 10;
    int a[length];
    int b[length];

    printf("Welcome to lab8!\n");
    getIntArray(a, &length);
    printArray(a, length);
    getIntArray(b, &length2);
    printArray(b, length2);
    printf("total of a[] elements: %d\n", totalArray(a, length));
    printf("average of a[] elements: %0.3f\n", avgArray(a, length));
    printf("total of b[] elements: %d\n", totalArray(b, length2));
    printf("average of b[] elements: %0.3f\n", avgArray(b, length2));

    printf("total of both array's elements: %d\n", totalArray(a, length) + totalArray(b, length2));
    printf("average of both array's elements: %0.3f\n", avgTwoArray(a, b, length, length2));
}

void getIntArray(int * outputArray, int * count)
{
    printf("How many integers? ");
    scanf("%d", count);

    for (int i = 0; i < *count; i++)
    {
        printf("Integer #%d: ", i);
        scanf("%d", &outputArray[i]);
    }
}

void printArray(int * array, int count)
{
    printf("Elements of the array:\n");
    for (int i = 0; i < count; i++)
    {
        printf("element %d: %d\n", i, array[i]);
    }
}

int totalArray(int * array, int count)
{
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total += array[i];
    }
    return total;
}

double avgArray(int * array, int count)
{
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total += array[i];
    }
    return total / (double)count;
}

double avgTwoArray(int * array, int * array2, int count, int count2)
{
    int total = 0;
    int total2 = 0;
    for (int i = 0; i < count; i++)
    {
        total += array[i];
    }

    for (int j = 0; j < count2; j++)
    {
        total2 += array2[j];
    }
    return (double)(total + total2) / (double)(count + count2);
}*/


int main(void)
{
    int a = 1; 
    int * ptr = &a;

    printf("%d\n", *ptr);
    *ptr += 3;

    printf("%d\n", *ptr);
    printf("%d\n", a);
    printf("%ls\n", &a);
}