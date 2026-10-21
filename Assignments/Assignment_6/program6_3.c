//Accept the total purchase amount and calculate the final payable amoun after applying the following discount.Negativepurchase amounts are invalid
//Purchase Amount    Discount
//Below 1000/-          0%
//1000 to below 5000/-  10%
//5000/- and above      20%

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount<0)
    {
        printf("Invalid amount");
        return;
    }

    if(fAmount<1000 && fAmount>0)
    {
        printf("Payable Amount = %f", fAmount);
    }

    else if (fAmount>=1000 && fAmount<5000)
    {
        fDiscount = fAmount*10/100;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %f", fFinalAmount);
    }

    else if (fAmount>=5000)
    {
        fDiscount = fAmount*20/100;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %f", fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}