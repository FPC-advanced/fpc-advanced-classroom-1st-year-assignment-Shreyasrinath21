// Write a program to find GCD _(HCF)_ of two numbers.
#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main()
{
  int a,b,gcd;
  a=input();
  b=input();
  gcd=find_gcd(a,b);
  output(a,b,gcd);
}
int input()
{
    int x;
    printf("Enter the value:\n");
    scanf("%d",&x);
    return x;
}
int find_gcd(int a, int b)
{
    int gcd;
    if(a<0)
    {
        a=-a;
    }
    else
    if(b<0)
    {
        b=-b;
    }
    gcd=GCD(a,b);
    return gcd;
}
void output(int a, int b, int gcd)
{
    printf("the GCD of %d and %d is %d\n",a,b,gcd);
}
