#include <stdio.h>
#include <math.h>

int main(void)
{
    int rows = 12;
    int cols = 3;
    int a[12][3] = {{72, 68, 62}, {95, 88, 95}, {93, 97, 86}, {98, 77, 98}, {99, 92, 90}, {47, 32, 27}, {97, 99, 85}, {85, 95, 91}, {96, 91, 99}, {94, 90, 85}, {98, 98, 90},{76, 82, 98}};
    
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        printf("Row %d: ", i);
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nRow Averages:\n");
    double counterR = 0; 
    for (int i = 0; i < rows; i++)
    {
        printf("Row %d averages: ", i);
        for (int j = 0; j < cols; j++)
        {
            counterR += a[i][j];
        }
        printf("%f\n", counterR / rows);
        counterR = 0;
    }

    printf("\nColumn Averages:\n");
    double counterC = 0; 
    for (int i = 0; i < cols; i++)
    {
        printf("Column %d averages: ", i);
        for (int j = 0; j < rows; j++)
        {
            counterC += a[i][j];
        }
        printf("%f\n", counterC / cols);
        counterC = 0;
    }
}
