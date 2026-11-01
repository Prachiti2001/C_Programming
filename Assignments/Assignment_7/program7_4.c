//Write aprogram which accepts N number from user and print all odd number up to N
/*
Input: 18
Output: 1   3   5   7   9   11  13
*/

#include<stdio.h>

void OddDisplay(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        int iNum = 0;
        iNum = i;
        if((iNum%2)!= 0)
        {
            printf("%d ",iNum);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}