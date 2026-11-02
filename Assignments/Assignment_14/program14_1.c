//Write a program which accept the number from user and display its multiplication factors.
/*
Input:12
Output:144    (1*2*3*4*6)


Input:13
Output:1      (1)


Input;10
Output:10   (1*2*5)
*/

#include <stdio.h>

int MultiFact(int iNo)
{
    int iCount = 1;
    int iFact = 1;
    for(iCount=1;iCount<=iNo/2;iCount++)
        {
            if(iNo%iCount==0)
            {
                iFact=iFact*iCount;
            }
        }
        return iFact;
}

int main() 
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
   
}