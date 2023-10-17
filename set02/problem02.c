#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);


int input_side() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}


int check_scalene(int a, int b, int c) {
    int isscalene;
    if (a != b && a != c && b != c) {
        isscalene=1;
        return isscalene;
    } else {
        isscalene=0;
        return isscalene; 
    }
    return isscalene;
}


void output(int a, int b, int c, int isscalene) {
    printf("Side 1: %d\n", a);
    printf("Side 2: %d\n", b);
    printf("Side 3: %d\n", c);

    if (isscalene=1) {
        printf("The triangle is scalene.\n");
    } else {
        printf("The triangle is not scalene.\n");
    }
}

int main() {
    int side1,side2,side3,a,b,c;

    
    side1 = input_side();
    side2 = input_side();
    side3 = input_side();

    
    int isscalene = check_scalene(a,b,c);

    
    output(a,b,c,isscalene);
    return 0;
}