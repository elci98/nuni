#include <stdio.h>

#include "basicMath.c"
#include "power.c"
double f1(double x)
{
    return sub(add(Exp((int)x),Pow(x,3)),2);
}
double f2(double x)     
{
    return add( (float)mul(3,x) , (float)mul(2,Pow(x,2) ));
}
double f3(double x)
{
    return sub( (float)div( mul( 4 , Pow(x,3) ) , 5) , (float)mul(2,x) );
}
int main()
{
    double x=0;
    printf("please enter a real number\n");
    scanf("%lf",&x);
    printf("the value of f(x)=e^x+x^3-2 when x=%.4lf is:\t%.4lf\n",x,f1(x));
    printf("the value of f(x)=3x+2x^2 when x=%.4lf is:\t%.4lf\n",x,f2(x));
    printf("the value of f(x)=(4x^3)/5-2x when x=%.4lf is:\t%.4lf\n",x,f3(x));
    return 0;
}
