//Accet one character from user and conver case of that character
//Input:a    Output:A
//Input:D    Output:d

#include<stdio.h>

int DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c",cValue + 32);
    }
    else
    {
        printf("Invalid input from user");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");

    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}