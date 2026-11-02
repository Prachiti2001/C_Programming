//Write a program which accept the name from user and print that name.  
/*
Input:Prachiti Suryawanshi
Output:Prachiti Suryawanshi
*/


#include <stdio.h>

int main()
{
    char Name[30];
    printf("Please enter full Name :");
    scanf("%[^'\n']s",Name);
    
    printf("Your name is : %s\n",Name);
    return 0;
}