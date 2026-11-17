//Write a program which accept string from user and display it in reverse order
/*
Input: "MarvellouS"
Output:"SuollevraM"
*/

#include<stdio.h>

void Reverse(char *str)
{

    char temp ;
    char *start =str;
    char *end =str;

    while(*end !='\0')
    {
        end++;
    }

    if(end==str)
    {
        return;
    }

    end--;

    while(start<end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    

}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Reverse string is:%s",arr);

    return 0;

}