#include<stdio.h>
int global_var = 10; // Global variable
void fun1()
{
    global_var += 5;
    printf("Inside fun1, global_var: %d\n", global_var);
}
void fun2()
{
    global_var*=3;
    global_var -=4;
    printf("Inside fun2, global_var: %d\n", global_var);
}
void fun3()
{
    global_var/=2;
    printf("Inside fun3, global_var: %d\n", global_var);
}
int main()
{
    printf("Initial global_var: %d\n", global_var);
    fun1();
    fun2();
    fun3();
    printf("Final global_var in main: %d\n", global_var);
    return 0;
}