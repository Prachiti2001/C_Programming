//Write a program which accept string from user and accept one character.Return index of last occurrence of that character.
/*
Input:"Marvellous Multi OS"
       M
Output:11

Input:"Marvellous Multi OS"
       W
Output:-1

Input:"Marvellous Multi OS"
       e
Output:4
*/

#include<stdio.h>

int LastChar(char *str,char ch)
{
    int cLocation = 0;
    int ich= -1;
    while(*str !='\0')
    {
        if(*str==ch)
        {
           ich = cLocation;
        }
        str++;
        cLocation++;
    }
    return ich;
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

    iRet = LastChar(arr,cValue);

    printf("Character locataion is %d",iRet);

    return 0;
}
