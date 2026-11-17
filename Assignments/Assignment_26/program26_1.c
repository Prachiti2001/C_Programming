//Write a program which displays ASCII table.Table contains symbol,Decimal,Hexadecimal and octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
   int No = 0;

   printf("Symbol\tDecimal\tOctal\tHexadecimal\n");

   for(No = 0 ; No<=255 ; No++)
   {
        printf("%c\t",No);
        printf("%d\t",No);
        printf("%o\t",No);
        printf("%X\n",No);
    }
}    

int main()
{
    DisplayASCII();

    return 0;
}