//Write a program which accept the three number from user and print its multiplication 
/*
Input:5 4 7
Output:140


Input:5 0 7
Output:35


Input:5 0 0
Output:5


Input:0 0 0
Output:0


*/


#include <stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
    {
      int iMul=0;
        if(iNo1==0 && iNo2==0)
        {
            iMul=iNo3;
        }
        else if(iNo2==0 && iNo3==0)
        {
            iMul=iNo1;
        }
        else if(iNo1==0 && iNo3==0)
        {
            iMul=iNo2;
        }
        else if(iNo1==0)
        {
            iMul=iNo2*iNo3;
        }
        else if(iNo2==0)
        {
            iMul=iNo1*iNo3;
        }
        else if(iNo3==0)
        {
            iMul=iNo1*iNo2;
        }
        else
        {
            iMul=iNo1*iNo2*iNo3;
        }
        return iMul;
    
    }


int main()
{
    int iValue1=0 ,iValue2=0, iValue3=0, bRet=0;

    printf("Please enter three numbers");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    bRet = Multiply(iValue1,iValue2,iValue3);

    printf("%d",bRet);

    return 0;
}