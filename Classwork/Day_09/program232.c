#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[20] = "Ganesh Pune";   //string initializer ,space is not printable but it is character

    printf("%s\n",Arr);

    printf("Size of Array is : %d\n",sizeof(Arr));
    printf("Length of string is: %d\n",strlen(Arr));


    return EXIT_SUCCESS;
}