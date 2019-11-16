#define POWER
#include "myMath.h"
#define EXP 2.718281828
double Exp(int x)
{
    double ans=1;
    for(int i=0;i<x;i++)
    {
        ans*=EXP;
    }
return ans;
}
double Pow(double x,int y)
{
    double ans=1;
    for(int i=0;i<y;i++)
    {
        ans*=x;
    }
    return ans;
}