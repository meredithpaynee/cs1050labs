#include <stdio.h>

int main(void)
{
    /*lab2   
    
    int x;
    int y;
    printf("enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    int m = x*y;
    printf("%d\n", m);
    int d = x/y;
    printf("%d\n", d);
    int e = (x+1)*y;
    printf("%d\n", e);
    int r = x%y;
    printf("%d\n", r);
    int c = (y+1)%x;
    printf("%d\n", c);
    printf("x = %d\n", x);
    printf("y = %d\n", y);*/


    /*lab3
    
    int x;
    printf("Enter -1 or 1: ");
    scanf("%d", &x);

    if (x == -1)
    {
        for (int i = 100; i >= 1; i--)
        {
            if(i % 3 == 0 && i % 7 == 0)
            {
                printf("TS%d", i);
            }
            else if(i % 3 == 0)
            {
                printf("T%d ", i);
            }
            else if(i % 7 == 0)
            {
                printf("S%d ", i);
            }
            else
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    else if (x == 1)
    {
        for (int i = 1; i <= 100; i++)
        {
            if(i % 3 == 0 && i % 7 == 0)
            {
                printf("TS%d", i);
            }
            else if(i % 3 == 0)
            {
                printf("T%d ", i);
            }
            else if(i % 7 == 0)
            {
                printf("S%d ", i);
            }
            else
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }*/

    for(int i = 1; i < 300; i++)
    {
        switch(i / 100)
        {
            case(1):
                printf("one hundred ");
                break;
            case(2):
                printf("two hundred ");
                break;
        }

        switch((i / 10) % 10)
        {
            case(0):
                printf(" ");
                break;
            case(1):
                /*switch(i%10)
                {
                    case(0):
                        printf("ten ");
                        break;
                    case(1):
                        printf("eleven ");
                        break;
                    case(2):
                        printf("twelve ");
                        break;
                    case(3):
                        printf("thirteen ");
                        break;
                    case(4):
                        printf("fourteen ");
                        break;
                    case(5):
                        printf("fifteen ");
                        break;
                    case(6):
                        printf("sixteen ");
                        break;
                    case(7):
                        printf("seventeen ");
                        break;
                    case(8):
                        printf("eighteen ");
                        break;
                    case(9):
                        printf("nineteen ");
                        break;
                }*/
                printf("teen ");
                break;
            case(2):
                printf("twenty ");
                break;
            case(3):
                printf("thirty ");
                break;
            case(4):
                printf("forty ");
                break;
            case(5):
                printf("fifty ");
                break;
            case(6):
                printf("sixty ");
                break;
            case(7):
                printf("seventy ");
                break;
            case(8):
                printf("eighty ");
                break;
            case(9):
                printf("ninety ");
                break;
        }
        switch(i % 10)
        {
            case(0):
                printf(", ");
                break;
            case(1):
                printf("one, ");
                break;
            case(2):
                printf("two, ");
                break;
            case(3):
                printf("three, ");
                break;
            case(4):
                printf("four, ");
                break;
            case(5):
                printf("five, ");
                break;
            case(6):
                printf("six, ");
                break;
            case(7):
                printf("seven, ");
                break;
            case(8):
                printf("eight, ");
                break;
            case(9):
                printf("nine, ");
                break;
        }
    }
}