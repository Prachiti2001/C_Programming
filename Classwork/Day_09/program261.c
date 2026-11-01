#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0 , iCountCapital = 0, iCountDigit = 0;

    while(*str !='\0')
    {
        if(*str >= 'a' && *str <='z')
        {
            iCountSmall++;
        }
        else if(*str >= 'A' && *str <='Z')  
        {
            iCountCapital++;
            
        }
        else    //Issue
        {
            iCountDigit++;
            
        }  
        str++;
    }
    printf("Total small letter are:%d\n",iCountSmall);
    printf("Total Capital letters are:%d\n",iCountCapital);
    printf("Total digits are:%d\n",iCountDigit);
            

}
    


int main()
{
   char Arr[100] ={'\0'};
   int iRet = 0;


    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    CountFrequencyX(Arr);

    


    return EXIT_SUCCESS;
}