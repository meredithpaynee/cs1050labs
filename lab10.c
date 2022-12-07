/*************************
* CMP_SC 1050
* FS 2022
* Lab 10
* Meredith Payne (MAPCPX)
* November 11, 2022
*************************/

// includes
#include <stdio.h>
#include <ctype.h>

// Symbolic Constants
#define S1 "1, 2, 3, 4 tell me that you love me more.  Sleepless long nights, that is what my youth was for."
#define S2 "\t99 dreams I have had.  In every 1 a red balloon."
#define S3 "And you'll start cryin' 96 tears."
#define S4 "I demand the sum of.....$1,000,000.00!"
#define STRINGCOUNT 4

////////////////
// Prototypes //
////////////////
char * Filter(char * s);

// Main
int main(void)
{
    char s[STRINGCOUNT][256]=
    {
        S1,S2,S3,S4,
    };

    printf("**** Original Strings ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,s[i]);
    }

    printf("\n\n**** Strings after filtering ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,Filter(s[i]));
    }
}

char * Filter(char * s)
{
    //Need: whitespace, punctuation, uppercase, and lowercase
    int n = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        int c = s[i];
        if(isspace(c) == 0)
        {
            s[i + n] = c;
            n++;
        }
    }
    s[n] = '\0';
    n = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        int c = s[i];
        if(ispunct(c) == 0)
        {
            s[i + n] = s[i];
            n++;
        }
    }
    s[n] = '\0';
    for (int i = 0; s[i] != '\0'; i++)
    {
        int c = s[i];
        if(islower(c) == 0)
        {
            s[i] = toupper(c);
        }
        else if (isupper(c) == 0)
        {
            s[i] = tolower(c);
        }
    }
    return s;
}