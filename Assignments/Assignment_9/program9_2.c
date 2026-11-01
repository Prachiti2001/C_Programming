//Accept amount in US dollar and return its corresponding value in Indian currency.Conside 1$ as 70 Rupees.
/*
Input: 10
Output:700

Input:1200
Output: 84000

*/

#include<stdio.h>

int DollarTOINR(int iNo)
{
    int Value ;
    Value = iNo*70;

    return Value;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD");
    scanf("%d",&iValue);

    iRet = DollarTOINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}