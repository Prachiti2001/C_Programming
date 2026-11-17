//Write a program which accept string from user and accept one character.Return frequency of that character
/*
Input: "Marvellous Multi OS"
        M
Output: 2

Input: "Marvellous Multi OS"
       W
Output: 0       

*/

#include<stdio.h>

int CountChar(char *str,char ch)
{
    int count = 0;
    while(*str != '\0')
    {
        if(*str==ch || *str == ch+32 || *str== ch-32)
        
        {
            count++;
        }
        str++;
    }  
    return count;  

}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Charater frequency is %d",iRet);

    return 0;

}