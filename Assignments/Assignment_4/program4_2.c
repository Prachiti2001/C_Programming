//Accept an integer from user and determine whether it is even or odd.An even number is completely divisible by 2

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if(iValue%2==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}