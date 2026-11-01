//A student is eligible for admission if the student's marks are at least 60 and age is at least 17 years. Accept both values and determine eligibility. Negative age or marks outside 0–100 must be treated as invalid input.

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if(fMarks<0 || iAge<0)
    {
        printf("Invalid input");
        return;
    }

    if(fMarks>=60 && iAge>=17)
    {
        printf("Eligible for Admission");
    }
    else if (fMarks>=60 && iAge<17)
    {
        printf("Not Eligible");
    }
    else if (fMarks<60 && iAge>=17)
    {
        printf("Not Eligible");
    }
   
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;

}