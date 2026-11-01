//Accept the numbe of electricity units consumed and calculate thetotal bill using the following slab-wise rates.Each slab rate applies only to units within that slab

//Units consumed        Rate
//First 100 units      5\- per unit
//Next 100 units       7\- per unit
//Above 200 units      10\- per units

//Negative unit consumption is invalid

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits<0)
    {
        printf("Invalid units");
        return ;
    }
    else if(iUnits>=0 && iUnits<=100)
    {
        fBill = fBill + iUnits * 5;
    }
    else if(iUnits>100 && iUnits<=200) 
    {
        int remaniningUnit = 0;
        fBill = 500.0f;
        remaniningUnit = iUnits - 100;
        fBill = fBill + remaniningUnit  * 7;
    }
    else
    {
        int remaniningUnit = 0;
        fBill = 500.0f + 700.0f;
        remaniningUnit = iUnits - 200;
        fBill = (fBill + remaniningUnit  * 10);
    }
    printf("%f", fBill);
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}