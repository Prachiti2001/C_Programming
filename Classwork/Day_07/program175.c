#include<stdio.h>
#include<stdlib.h>

int Reverse(int iNo)
{
    int iDigit = 0,iRev = 0;

    /*if(iNo<0)    //No need of this because it give positive number ,ut if we take -987 and it gives reverse number as 789 but we want o/p as -789
    {
        iNo = -iNo;
    }*/

    while(iNo!=0)
    {
        iDigit = iNo%10;
        iRev=(iRev*10) + iDigit;
        iNo = iNo/10;
    }
    return iRev;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=Reverse(iValue);

    printf("Reverse number is :%d\n",iRet);

    return EXIT_SUCCESS;
}