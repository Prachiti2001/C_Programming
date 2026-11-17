/*
Write a program which accept string from user and count number of white spaces 

Input: "MarvellouS"

Output: 0

Input: "MarvellouS Infosystems"

Output: 1

Input: "MarvellouS Infosystems by Piyush Manohar Khairnnar"

Output: 5

*/

#include<stdio.h>

int CountWhite(char *str)
{
    int Count = 0;
    while(*str != '\0')
    {
        if(*str ==' ')
        {
            Count++;
        }
        str++;
    }
    return Count;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}