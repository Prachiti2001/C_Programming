//Accept 3 integers and determine he greatest number amog them.The program must also work correctly when 2 or all therr numbers are equal

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst>iSecond && iFirst>iThird)
    {
        printf("%d is Greatest",iFirst);
    }
    else if(iSecond>iFirst && iSecond>iThird)
    {
        printf("%d is Greatest",iSecond);
    }
    else if(iThird>iFirst && iThird>iSecond)
    {
        printf("%d is Greatest",iThird);
    }
    else 
    {
        printf("%d is Greatest",iFirst);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}