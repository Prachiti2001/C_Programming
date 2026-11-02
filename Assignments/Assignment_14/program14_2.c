//Write a program which accept the number from user and display its factors in decreasing order.
/*
Input:12
Output:6 4 3 2 1


Input:13
Output:1      (1)


Input;10
Output:5 2 1
*/

#include <stdio.h>

void FactRev(int iNo)
{
    int iCount = 1;
    int iFact = 1;
    for(iCount=iNo/2;iCount>=1;iCount--)
        {
            if(iNo%iCount==0)
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

    FactRev(iValue);

    return 0;
   
}