#include<stdio.h>
#include<stdlib.h>

int countX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        
        if((*str =='A') || (*str =='a'))
        {
            iCount++;
        }
        str ++;
        
        

    }
    return iCount;
}

int main()
{
   char Arr[100] ={'\0'};
   int iRet = 0;


    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    iRet = countX(Arr);

    printf("Frequency of A: %d\n",iRet);


    return EXIT_SUCCESS;
}