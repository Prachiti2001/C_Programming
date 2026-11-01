#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[20] = "Ganesh Pune";   //string initializer ,space is not printable but it is character

    printf("%s\n",Arr);

    printf("Size of Array is : %d\n",sizeof(Arr));


    return EXIT_SUCCESS;
}