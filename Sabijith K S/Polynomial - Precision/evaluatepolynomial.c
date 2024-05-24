#include<math.h>
#include "evaluatepolynomial.h"

float evaluate_polynomial(int coeffecient[],int degree, float x)
{
    float result=0.0;
    
    for(int i=0;i<=degree;i++)
    {
        result+= coeffecient[i]*pow(x,degree-i);
    }
    
    return result;
}
