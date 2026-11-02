//Write a program which accept the number from user and return summation of its non factors
/*
Input:12
Output:50


Input;10
Output:37
*/

#include <stdio.h>

int SumNonFact(int iNo)
{
    int iCount = 1;
    int iNonFact = 0;
    for(iCount=1;iCount<=iNo;iCount++)
        {
            if((iNo%iCount)!= 0)
            {
                iNonFact = iNonFact+iCount;
            }
        }
    return iNonFact;
}

int main() 
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
   
}