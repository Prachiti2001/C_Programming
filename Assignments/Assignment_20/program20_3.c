//Accept number of rows and columns from user and display below pattern
/*Input: iRow = 6   jCol = 6
Output:
       *    *   *   *    *     *
       *                 *     *
       *            *          *
       *        *              *
       *    *                  *
       *    *   *   *    *     *
       
*/


#include<stdio.h>

void Pattern(int iRow ,int jCol)
{
    int i =0;
    int j =0;
    
    for(i=1;i<=iRow;i++)
        {
           for(j=1;j<=jCol;j++)
                {
                    if(i == iRow || j == jCol || i== 1 || j== 1 || i+j==jCol+1)
                    {
                        printf("*\t");  
                    }
                    else
                    {   
                        printf(" \t"); 
                    }   
                    
                }
            printf("\n");
        }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}