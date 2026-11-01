//write a program which accept tempreture in Fahrenheit and convert it into celsicus.(1 celsius = (Fahrenheit-32)*(5/9))
// Input : 10
// Output : -12.2222  (10-32) *(5/9)
// Input : 34
// Output : 1.11111   (34-32) *(5/9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double FhtoCs = 0.0;
    FhtoCs = ((fTemp-32)*(5.0/9.0));
    return FhtoCs;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Tempreture in Fahrenheit");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    printf("Temperature in the celsicus is %f",dRet);
    
    return 0;
    
}
