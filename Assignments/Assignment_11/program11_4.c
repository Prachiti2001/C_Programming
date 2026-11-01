//Write a program which accept range from user and return addition of all even numbers in between that range.(Range should contains positive numbers only)
/*
input:23 30
Output:108

input:-10 2
ouput:Invalid range

input:10 18
output:70
*/

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    if(iStart>iEnd || iStart<0)
    {
        return 0;
    }

    int iSum=0;
    while(iStart<=iEnd)
    {
        if(iStart%2==0)
        {
            iSum=iSum+iStart;
        }         
        iStart++;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 =0, iRet =0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet==0)
    {
        printf("Invalid Range");
    }
    else
    {
        printf("Additon is %d",iRet);
    }
    

    return 0;


}