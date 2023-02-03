
#include <stdio.h>
#include <math.h>
void main()
{
    float a=9.8;
    int u=0,i,s=3;
    double t=0;
    for(i=1;i<10;i++,s=s+3)
    {
        t=u+sqrt(u*u+2*a*s);
    printf("%lf\n",t);
    }
}
