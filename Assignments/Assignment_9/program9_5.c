//Write a program which return difference between Even factorial & odd factorial of given number
/*
Input:5
Output:-7 (8-15)

Input:-5
Output:7 (8-15)

Input:10
Output:2895(3840-945)

*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iEvenFact = 1,iOddFact=1;
    int i = iNo;
    int iDiff;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(int i=iNo;i>=1;i--)
    {
        if(i%2==0)
        {
            iEvenFact = iEvenFact*i;
        }
        else
        {
            iOddFact =iOddFact*i;
        }
        iDiff = (iEvenFact-(iOddFact));

    }
    if(iDiff<0)
    {
        iDiff = -iDiff;
    }
    
    return iDiff;
}

int main()
{
    int iValue =0,iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}