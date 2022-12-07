/*************************
* CMP_SC 1050
* FS 2022
* Lab 9
* Meredith Payne (MAPCPX)
* November 4, 2022
*************************/

#include <stdio.h>

//prototypes
void getString(char * a);
int numChars(char * a);
void reverseString(char * array, int l);
void bigReverse(char * a);

int main(void)
{
    int length = 512;
    char a[length];

    printf("*** Welcome to Lab9 ***\n");
    getString(a);
    printf("You entered: %s\n", a);
    bigReverse(a);
    printf("The modified string is: %s", a);
    printf("\n*** thank you for doing Lab9 ***\n");
}

void getString(char * a)
{
    printf("Please enter a string: ");
    scanf("%s", a);
}

int numChars(char * a)
{
    int count = 0;
    for (int i = 0; *(a + i) != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseString(char * a, int l)
{
    char temp;
    char * b = a;
    char * c = a + l -1;
    for (int i = 0; i < (l / 2); i++)
    {
        temp = *c;
        *c = *b;
        *b = temp;
        b++;
        c--;
    }
}

void bigReverse(char * a)
{
    int length = numChars(a);
    int half = length/2;
    if(numChars(a) % 2 == 0)
    {
        reverseString(a, half);
        a += half;
        reverseString(a, half);
    }
    else if(numChars(a) % 2 !=0)
    {
        reverseString(a, half);
        a += half + 1;
        reverseString(a, half);
    }

}