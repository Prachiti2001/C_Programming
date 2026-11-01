#include<stdio.h>
#include<stdlib.h>

void Display(char *str)   //Array is treated as pointer
{
    printf("%s\n",str);
}

int main()
{
    char Arr[100];

    printf("Enter string : \n");
    scanf("%[^'\n']s\n",Arr);

    Display(Arr);    //Display(100) :call by address

    return EXIT_SUCCESS;
}