//Write a program which accept string from user and accept one character.Retun index of first occurrence of that character
/*
Input: "Marvellous Multi OS"
        M
Output: 0

Input: "Marvellous Multi OS"
        W
Output: -1

Input: "Marvellous Multi OS"
        e
Output: 4

*/

#include<stdio.h>

int FirstChar(char *str,char ch)
{
    int cLocation = 0;
    while(*str !='\0')
    {
        if(*str==ch)
        {
           return cLocation; 
        }
        str++;
        cLocation++;
    }
    return -1;
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

    iRet = FirstChar(arr,cValue);

    printf("Character locataion is %d",iRet);

    return 0;
}
