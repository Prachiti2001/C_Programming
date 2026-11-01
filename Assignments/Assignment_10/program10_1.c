//Write a program which accepts radius of circle from user and calculateits area. Conside value of PI as 3.14(Area = PI*Radius*Radius)
/*
Input: 5.3
Ouput:88.2026

Input:10.4
Output:339.6224
*/

#include<stdio.h>

double CircleArea(float fRadius)
{
    const float PI = 3.14f;
    float Area =0.0f;
    Area = (PI*fRadius*fRadius);
    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %.4f",dRet);

    return 0;
}