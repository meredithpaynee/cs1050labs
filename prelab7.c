#include <stdio.h>
#include <math.h>
#define rows 12
#define cols 3

void print2DArray(int array[][cols]);
float printRowAverage(int array[][cols], int whichRow);
float printColAverage(int array[][cols], int whichCol);

int main(void)
{
    int a[rows][cols] = {{72, 68, 62}, {95, 88, 95}, {93, 97, 86}, {98, 77, 98}, {99, 92, 90}, {47, 32, 27}, 
    {97, 99, 85}, {85, 95, 91}, {96, 91, 99}, {94, 90, 85}, {98, 98, 90}, {76, 82, 98}};

    printf("Matrix:\n");
    print2DArray(a);

    printf("Row Averages:\n");
    for (int i = 0; i < rows; i++)
    {
        printf("Row %d averages: %f\n", i, printRowAverage(a, i));
    }

    printf("Column Averages:\n");
    for (int i = 0; i < cols; i++)
    {
        printf("Column %d Averages: %f\n", i, printColAverage(a, i));
    }
}

//needs to print out the array
//problems: variables in the function arent working (cols)
void print2DArray(int array[][cols])
{
    for (int i = 0; i < rows; i++)
    {
        printf("Row %d: ", i);
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

float printRowAverage(int array[][cols], int whichRow)
{
    double counter = 0;
    for (int i = 0; i < cols; i++)
    {
        counter += array[whichRow][i];
    }
    return counter / cols;
}

float printColAverage(int array[][cols], int whichCol)
{
    double counter = 0; 
    for (int i = 0; i < rows; i++)
    {
        counter += array[i][whichCol];
    }
    return counter / rows;
}