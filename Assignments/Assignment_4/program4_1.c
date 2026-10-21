//Write a C program that accepts an integer from the user and determines whether the entered number is positive,negative or zero

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue>0)
    {
        printf("Positive number");
    }
    else if(iValue<0)
    {
        printf("Negative number");
    }
    else
    {
        printf("Zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;

}