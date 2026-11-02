//Write a program which accept the number from user and return difference between summation of its factors &  non factors
/*
Input:12
Output:-34   (16-50)


Input;10
Output:-29   (8-37)
*/

#include <stdio.h>

int FactDiff(int iNo)
{
    int iCount = 1;
    int iFact = 0;
    int iNonFact = 0;
    int iDiff = 0;
    for(iCount=1;iCount<iNo;iCount++)
        {
            if((iNo%iCount)== 0)
            {
                iFact = iFact+iCount;
            }
            else
            {
                iNonFact = iNonFact+iCount;
            }
            iDiff = (iFact - iNonFact);
        }
    return iDiff;
}

int main() 
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d",iRet);

    return 0;
   
}