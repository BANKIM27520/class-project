#include<stdio.h>
double cir(double r)
{
    float area;
    area=3.14*r*r;
    return area;
}
int main()
{
    double p;
    printf("ENTER THE RADIUS OF THE CIRCLE:");
    scanf("%lf",&p);
    printf("AREA OF THE CIRCLE=%.2lf\n",cir(p));
    return 0;
}
