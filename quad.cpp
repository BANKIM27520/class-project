/*ENTER A QUADRATIC EQUATION AND DISPLAY THE ROOTS OF THE NO.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,r1,r2,real,imag;
    printf("ENTER THE COEFFICIENT OF QUADRATIC EQUATION :\n");
    scanf("%d\n %d %d",&a,&b,&c);
    printf("THE QUADRATIC EQUATION IS : %dx^2 + %dx + %d\n",a,b,c);
    d=b*b-4*a*c;
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("THE ROOTS ARE REAL AND IMAGINARY\n");
        printf("ROOT 1=%.2f",r1);
        printf("ROOT 2=%.2f",r2);
    }
    else if(d==0)
    {
        r1=r2=-b/(2*a);
        printf("THE ROOTS ARE REAL AND EQUAL %.2f %.2f",r1,r2);
    }
    else
    {
        real=-b/(2*a);
        imag=sqrt(-d)/(2*a);
        printf("THE ROOTS ARE COMPLEX AND IMAGINARY\n");
        printf("ROOT1=%.2f+%.2fi \n",real,imag);
        printf("ROOT2=%.2f-%.2fi\n",real,imag);
    }
    return 0;

}