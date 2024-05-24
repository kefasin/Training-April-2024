#include<math.h>
#include "evaluatederivative.h"

float evaluate_derivative(int coeffecient[],int degree, float x)
{
    float result=0.0;
    
    for(int i=0;i<degree;i++)
    {
        result+=coeffecient[i]+(degree-i)*pow(x,degree-i-1);
    }
    
    return result;
}
