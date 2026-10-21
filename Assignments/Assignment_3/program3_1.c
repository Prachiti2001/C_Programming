//Write a program which accepts one number from user and print that number of even numbers on screen

//Input:7
//Output: 2 4 6 8 10 12 14

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    else
    {
        int count;
       for(count=1;count<=iNo;count++)
       {
            printf("%d    ",count * 2);
       }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
