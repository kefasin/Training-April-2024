#include<stdio.h>

void print_polynomial(int degree,int coeffecient[])
{
    for(int i=degree;i>=0;i--)
    {
        if(coeffecient[i]!=0)
        {
            if(i<degree && coeffecient[i]>0)
            {
                printf(" + ");
            }
            
            else if(coeffecient[i]<0)
            {
                printf(" - ");
                coeffecient[i]=-coeffecient[i];
            }

            if(i==0 || coeffecient[i]!=1)
            {
                printf("%d",coeffecient[i]);
            }

            if(i>0)
            {
                printf("x");
                
                if(i>1)
                {
                    printf("^%d",i);
                }
            }
        }
    }
    
    printf("\n");
}
