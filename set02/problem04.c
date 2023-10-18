#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int is_composite(int n);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main() {
    int n = input_array_size();
    int a[n];
    input_array(n, a);
    int sum = sum_composite_numbers(n, a);
    output(sum);
    return 0;
}

int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int is_composite(int n) {
     int i,result,a[n];
    if(n<=1)
    {
        result=0;
        return result;
    }
    for(i=2;i<n;i++)
    {
        if(n % a[i]==0)
        { 
            result=1;
            return result;
        }
        else
        if(n % a[i] != 0)
        {
            result=-1;
            return result;
        }
    }
    return result;
}

int sum_composite_numbers(int n, int a[n]) {
    int i,sum = 0,result;
   for(i=0;i<n;i++) 
    {
        if(result==1) {
            sum=sum+a[i];
        }
    }
    return sum;
}

void output(int sum) {
    printf("The sum of composite numbers in the array is: %d\n", sum);
}
