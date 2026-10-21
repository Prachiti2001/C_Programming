//Accept an integer and determine whether it is divisible y both 3 and 5,only 3,ony5,or neither

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(iValue%3==0 && iValue%5==0)
    {
        printf("Divisible by Both");
    }
    else if(iValue%3==0)
    {
         printf("Divisible by 3 only");
    }
    else if(iValue%5==0)
    {
        printf("Divisible by 5 only");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}