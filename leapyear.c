#include <stdio.h> //Header File with Pre-Established Functions
#include <cs50.h> //Header File with Pre-Established Functions
#include <string.h> //Header File with Pre-Established Functions
#include <ctype.h> //Header File with Pre-Established Functions
#include <math.h> //Header File with Pre-Established Functions

int main(void)
{
printf("What year would would you like to test\n");
int year = get_int();

if (fmod(year,4) != 0)
    {
    printf("Not a leap year :(\n");
    }

if ((fmod(year,400) != 0) && (fmod(year,100) == 0))
{
printf("Not a leap year :(\n");
}

else
{
    printf("LEAP YEAR!\n");
}
}