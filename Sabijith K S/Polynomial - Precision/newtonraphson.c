#include<stdio.h>
#include<math.h>
#include "newtonraphson.h"
#include "evaluatepolynomial.h"
#include "evaluatederivative.h"

float newton_raphson(int coeffecient[],int degree, float root_guess, float tolerance, int maximum_iterations)
{
    float x=root_guess;
    
    for(int i=0;i<maximum_iterations;i++)
    {
        float fx = evaluate_polynomial(coeffecient,degree,x);
        float fpx= evaluate_derivative(coeffecient,degree,x);
        
        if(fabs(fpx)<tolerance)
        {
            printf("Derivative Too Small.");
            return x;
        }
        
        float x_next=x-fx/fpx;
        
        if(fabs(x_next-x)<tolerance)
        {
            return x_next;
        }
        
        x=x_next;
        
    }
    
    printf("Maximum Iterations Reached Without Convergence.\n");
    
    return x;
}
