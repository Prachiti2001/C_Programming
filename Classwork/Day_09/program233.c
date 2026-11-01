#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   char Arr[100];

   printf("Enter string: \n");
   scanf("%s",Arr);      //Array chya nava madhech tyacha address asto ,so we don't use & here.

   printf("Entered string is:%s\n",Arr);     //%s accepts string till 1st whitespace

   return EXIT_SUCCESS;
}