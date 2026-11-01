//Write a program to find even factorial of given number
/*
Input: 5
Output:8  (4*2)

Input: -5
Output:8 (4*2)
*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }

    int iFact = 1;
    for(int i=iNo;i>=1;i--)
    {
        if((i%2)==0)
            iFact = iFact*i; 
    }
    return iFact;

}

int main()
{
    int iValue=0,iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number us %d",iRet);

    return 0;
}