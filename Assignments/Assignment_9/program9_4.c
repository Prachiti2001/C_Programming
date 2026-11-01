//Write a program to find odd factorial of given number
/*
Input: 5
Output:15  (5*3*1)

Input: -5
Output:15 (5**3*1)
*/

#include<stdio.h>

int OddFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }

    int iFact = 1;
    int i = iNo;
    for(int i=iNo;i>=1;i--)
    {
        if((i%2)!=0)
            iFact = iFact*i;
    }
    return iFact;
    

}

int main()
{
    int iValue=0,iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number us %d",iRet);

    return 0;
}