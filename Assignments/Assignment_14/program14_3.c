//Write a program which accept the number from user and display its all non factors.
/*
Input:12
Output:5 7 8 9 10 11


Input:13
Output:2 3 4 5 6 7 8 9 10 11 12


Input;10
Output:3 4 6 7 8 9
*/


#include <stdio.h>

void NonFact(int iNo)
{
    int iCount = 1;
    for(iCount=1;iCount<=iNo;iCount++)
        {
            if((iNo%iCount)!= 0)
            {
                printf("%d\t",iCount);
            }
        }
}

int main() 
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
   
}