#include<stdio.h>

void get_polynomial(int degree,int coeffecient[])
{
    printf("\n");
    
    for (int i=degree;i>=0;i--)
    {
        printf("Enter Coefficient For X^%d : ",i);
        scanf("%d",&coeffecient[i]);
    }
}
