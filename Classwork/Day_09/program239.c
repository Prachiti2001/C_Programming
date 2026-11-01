#include<stdio.h>
#include<stdlib.h>

void Display(char str[]) //Array is treated as pointer 
{
    printf("%s\n",str);
}

int main()
{
    char Arr[] = "Ganesh";

    Display(Arr);    //Display(100) :call by address

    return EXIT_SUCCESS;
}