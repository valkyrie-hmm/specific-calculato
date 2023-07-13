// This is a 'simple' calculator for a few specific things that i used during last year of high school
// YES, the sin cos tan part is very bloated and could be remade but im lazy
#include <math.h>
#include <stdio.h>

double a, b, c, h, k, z, y, x;
double pi = atan(1) * 4;
int c0, c1, c2, c3, c4;
int e;

void empty_input(void) /* simple helper-function to empty stdin */  //(taken from stack overflow because im not a smart)
{
    int c = getchar();

    while (c != '\n' && c != EOF)
        c = getchar();
}
void cleanscreen(void)
{
    for (int i = 0; i < 50; i++) // clear the screen
    {
        printf("\n");
    }
}