#include<stdio.h>
#include<stdlib.h>

void Display(char *str)   // pointer
{
    printf("%s\n",str);
}

int main()
{
    char Arr[] = "Ganesh";

    Display(Arr);    //Display(100) :call by address

    return EXIT_SUCCESS;
}