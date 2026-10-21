//Accept two integers & determine which number is greater.If both numbers are equal,display an appropriate message

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst>iSecond)
    {
        printf("First number is greater");
    }
    else if(iFirst<iSecond)
    {
        printf("Second number is greater");
    }
    else
    {
        printf("Both the numbers are equal");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers:");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;

}