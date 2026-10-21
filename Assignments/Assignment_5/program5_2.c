//Accept a year and determine whether it is leap year according to Gregorian calender rules. A year is leap if it is divisible by 400 , or divisible by 4 bu not onl by 100.Consider years less than or equal to zero inavlid

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear%400==0 || (iYear%4==0 && !(iYear%100==0)))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}

int main()
{
    int iYear = 0;

    printf("Ente year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}