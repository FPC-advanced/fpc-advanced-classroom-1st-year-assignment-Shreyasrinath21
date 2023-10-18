//Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main()
{

}
int input_array_size()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
   int i;
    printf("Enter the vlues of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}
