/*************************
* CMP_SC 1050
* FS 2022
* Lab 7
* Meredith Payne (MAPCPX)
* October 14, 2022
*************************/

#include <stdio.h>
#include <math.h>
//symbolic constants
#define ROWS 12
#define COLS 3

//
void print2DArray(int array[][COLS], int r);
void printLetterGrades(int array1[][COLS], int array2[][COLS]);

//main function
int main(void)
{
    //initialize student scores array
    int a[ROWS][COLS] = {{72, 68, 62}, {95, 88, 95}, {93, 97, 86}, {98, 77, 98}, {99, 92, 90}, {47, 32, 27}, 
    {97, 99, 75}, {85, 95, 91}, {96, 91, 99}, {94, 90, 74}, {98, 98, 90}, {76, 82, 98}};

    //initialize curve array
    int c[4][COLS] = {{85, 90, 90}, {75, 80, 75}, {60, 70, 55}, {50, 60, 40}};
    
    //print scores
    printf("Scores:\n");
    print2DArray(a, ROWS);

    //print curve arrays
    printf("\nGrade Cutoffs:\n");
    print2DArray(c, 4);

    //print letter grades array
    printf("\nLetter Grades:\n");
    printLetterGrades(a, c);
    
}

//print first two arrays
void print2DArray(int array[][COLS], int r)
{
    for (int i = 0; i < r; i++)
    {
        printf("Row %d: ", i);
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

//print letter grades
void printLetterGrades(int array1[][COLS], int array2[][COLS])
{
    //Variable to represent the tested row
    int counter = 0;
    for (int i = 0; i < ROWS; i++)
    {
        printf("Student %d: ", i);
        for (int j = 0; j < COLS; j++)
        {
            //conditions to test the grades
            //test for A
            if(array1[i][j] <= 100 && array1[i][j] >= array2[counter][j])
            {
                printf("A ");
            }
            //test for B
            else if(array1[i][j] < array2[counter][j] && array1[i][j] >= array2[counter + 1][j])
            {
                printf("B ");
            }
            //test for C
            else if(array1[i][j] < array2[counter + 1][j] && array1[i][j] >= array2[counter + 2][j])
            {
                printf("C ");
            }
            //Test for D
            else if(array1[i][j] < array2[counter + 2][j] && array1[i][j] >= array2[counter + 3][j])
            {
                printf("D ");
            }
            //Test for F
            else if(array1[i][j] < array2[counter + 3][j])
            {
                printf("F ");
            }
        }
        printf("\n");
    }
}