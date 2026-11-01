#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0, iRev = 0;

    while(iNo !=0)
    {
        iDigit = iNo%10;
        iRev=(iRev*10) + iDigit;
        iNo = iNo/10;
        
    }
    if(iRev == iNo)   //issue - as iNo hold 0 
    {
        return true;
    }
    else
    {
        return false;
    }    
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet=CheckPalindrome(iValue);

    if(bRet ==true)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
    
    return EXIT_SUCCESS;
}