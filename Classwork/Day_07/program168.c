#include<stdio.h>
#include<stdlib.h>

int AverageDigits(int iNo)
{
    float fRet = 0;
    int iCount = 0;
    int iSum = 0;
    int iDigit = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
         iDigit = iNo%10;
         iSum = iDigit + iSum;
         iCount++;
         iNo = iNo / 10;
         
         fRet = iSum/iCount; 
         
         printf("%f\n",fRet);
         
    }
    return fRet ;
}




int main()
{
    int iValue = 0;
    int fRet = 0.0f;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    fRet= AverageDigits(iValue);

    printf("Average of Digits: %f\n",fRet);

    return EXIT_SUCCESS;
}