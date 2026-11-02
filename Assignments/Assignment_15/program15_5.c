//Write a program which accept the total marks & obtain marks from user and calculate percentage 
/*
Input:1000 745
Output:74.5
*/


#include <stdio.h>

float Percentage(int TotalMarks,int ObtainedMarks)
    {
        float Percentage = 0.0f;

        Percentage = ((float)ObtainedMarks/TotalMarks)*100;

        return Percentage;
    
    }


int main()
{
    int iValue1=0 ,iValue2=0; 
    float fRet=0.0f;
    
    printf("Please enter total marks");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks");
    scanf("%d",&iValue2);
    
    fRet = Percentage(iValue1,iValue2);
    printf("%.1f",fRet);
    return 0;
}

