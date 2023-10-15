//Write a C program to find the square root of a number.
#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
    float n,sqrroot;
    n=input();
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}
float input()
{
    float n;
    printf("Enter the number:\n");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    float sqrroot;
    sqrroot=sqrt(n);
    return sqrroot;
}
void output(float n, float sqrroot)
{
    printf("The square root of %f is %f\n",n,sqrroot);
}


