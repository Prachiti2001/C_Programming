//Write a program which accept N & prin first 5 multiples of N
/*
Input: 4
Output:4    8   12  16  20
*/

#include<stdio.h>

void MutipleDisplay(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }

    int i =1;
    while(i<=5)
    {
        int iMul;
        iMul= iNo*i;
        printf("%d ",iMul);
        i++;
    }
}




int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    MutipleDisplay(iValue);
    return 0;

}