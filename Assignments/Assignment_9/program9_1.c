//Write a program which accepts number from user & display below pattern
/*
Input: 5
Output: * * * * * # # # # #

Input: 6
Output: * * * * * * # # # # # #

Input: -5
Output: * * * * * # # # # #
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(int i=1;i<=iNo;i++)
      printf(" * ");

    for(int i=1;i<=iNo;i++)
       printf(" # ");  

}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}