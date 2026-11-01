/*
  Input:   4
  Output:  -4    -3   -2   -1   0   1   2   3   4       


*/

#include<stdio.h>
#include<stdlib.h>


void Pattern(int iNo)
{
    for(int iCnt=-iNo; iCnt<=iNo; iCnt++)  //O(2N)
    {
        printf("%d\t",iCnt);
        
    }

    printf("\n");

}

//Time Comlexity : O(2N)

int main()
{
    int iValue = 0;

    printf("Enter the value:\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}

