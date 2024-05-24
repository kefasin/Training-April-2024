#include<stdio.h>
#include<math.h>
#include "getpolynomial.h"
#include "printpolynomial.h"
#include "newtonraphson.h"


void main()
{
    int degree;
    
    printf("\nEnter Degree Of The Polynomial : ");
    scanf("%d",&degree);
    
    int coeffecient[degree+1];
    
    get_polynomial(degree,coeffecient);
    
    printf("\nPolynomial : ");
    print_polynomial(degree,coeffecient);
    
    float root_guess;
    
    printf("\nEnter The Initial Guess For Root : ");
    scanf("%f",&root_guess);

    float tolerance=0.001;
    int maximum_iterations=1000;
    float root= newton_raphson(coeffecient,degree,root_guess,tolerance,maximum_iterations);
    
    printf("Root That Has Been Found : %f\n\n",root);
}

