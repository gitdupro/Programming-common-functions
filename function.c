#include<time.h>
#include<stdlib.h>
const double Pi=3.1415926535,E=2.718281828459;

double fmodf(double a,double b)
{
    double rest=a-b;
    for(;rest>=b;)
        rest-=b;
    return rest;
}
double dou_rand(double a,double b)
{
    srand((unsigned)time(NULL));
    return fmodf(rand()/60,b-a+0.001)+a;
}
double* sort(double*num,int n)
{
    int i,j;
    double k;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]<num[j])
            {
                k=num[i];
                num[i]=num[j];
                num[j]=k;
            }
        }
    }
    return num;
}
