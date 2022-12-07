/*
 * CS1050
 * Fall 2022
 * Prelab 10 Starter File
 * by Jim Ries
 */

// includes
#include <stdio.h>
#include <ctype.h>

// Symbolic Constants
#define S1 "I'm not cool and I'm not smart and I can't even parallel park."
#define S2 "\n\n\tMommy's alright.  \t Daddy's alright.  They just seem a little weird.\n\n"
#define S3 "Every cheap hood strikes a bargain with the world.  Ends up making payments on a sofa or a girl."
#define S4 "Now some guys they just give up living.  And start dying little by little, piece by piece.      "
#define STRINGCOUNT 4

////////////////
// Prototypes //
////////////////

// KillWhiteSpace should take a string, remove the whitespace from that string in-place,
// and return a pointer to the beginning of the resultant string (which really should
// be the same thing that was passed in originally - i.e., s).
char * KillWhiteSpace(char *s);
int numChars(char * a);


// Main
int main(void)
{
    char s[STRINGCOUNT][256]=
    {
        S1,S2,S3,S4
    };

    printf("**** Original Strings ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,s[i]);
    }

    printf("\n\n**** Strings without whitespace ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,KillWhiteSpace(s[i]));
    }
}

char * KillWhiteSpace(char *s)
{
    int n = 0; 

    for (int i = 0; *(s + i) != '\0'; i++)
    {
        int c = *(s + i);
        if(isspace(c) == 0)
        {
            *(s + n) = *(s + i);
            n++;
        }
    }
    *(s + n) = '\0';
    return s;
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