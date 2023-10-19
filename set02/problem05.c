// Write a program to find GCD _(HCF)_ of two numbers.
#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int result);
int main()
{
  int a,b,result;
  a=input();
  b=input();
  result=find_gcd(a,b);
  output(a,b,result);
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
    int result;
     if (b == 0)
     {
        return a;
        return gcd(b, a % b);
     }
    if(a<0)
    {
        a=-a;
    }
    else
    if(b<0)
    {
        b=-b;
    }
    result = gcd(a,b);
    return result;
}
void output(int a, int b, int result)
{
    printf("the GCD of %d and %d is %d\n",a,b,result);
}
