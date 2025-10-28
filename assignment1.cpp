#include<stdio.h>
int main()
{
   int a=10;
   double g=3.15;
   printf("address of a=%d\n",&a);//print address of a in integer format
    printf("address of g=%p\n",&g);//print address of g in pointer format
    return 0;
}
