#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   char Arr[100];

   printf("Enter string: \n");
   scanf("%[^'\n']s",Arr);      //jopariyant \n yet nahi topariyant print karave

   printf("Entered string is:%s\n",Arr);     //%s accepts string till 1st whitespace

   return EXIT_SUCCESS;

}