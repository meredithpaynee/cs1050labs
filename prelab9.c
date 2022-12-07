#include <stdio.h>

void getString(char * a, int count);
int numChars(char * a);
void reverseString(char * array);

int main(void)
{
    int length = 256;
    char a[length];
    printf("Welcome to Prelab 9!\n");
    getString(a, length);
    printf("array length = %d\n", length);
    printf("That string is %d characters in length.\n", numChars(a));
    reverseString(a);
    printf("That string is %d characters in length.\n", numChars(a));
}

//this works
void getString(char * a, int count)
{
    printf("Please enter a string: ");
    scanf("%s", a);
    printf("You entered: %s\n", a);

    count = numChars(a);
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

void reverseString(char * a)
{
    char temp;
    int l = numChars(a);

    for (int i = 0; i < (l / 2); i++)
    {
        temp = *(a + i);
        *(a + i) = *(a + l - i - 1);
        *(a + l - i - 1) = temp;
    }
    
    printf("String backwards: %s\n", a);
}