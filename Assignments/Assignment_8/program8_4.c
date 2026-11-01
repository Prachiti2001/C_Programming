//Write a program which accepts number from user and display its table
/*
Input:2
Ouput:2 4 6 8 10 12 14 16 18 20
*/

#include<stdio.h>

void Table(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }

    int iNum =1;
    for(int i=1;i<=10;i++)
    {
        iNum = iNo*i;
        printf("%d ",iNum);
    }


}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Table (iValue);

    return 0;
}