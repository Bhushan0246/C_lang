#include <stdio.h>
#include<math.h>
int main() {
    float x, a, b, c, y;
    printf("Roots of quadratic equation ax^2 + bx + c = 0\n");
    printf("Enter the valve of a (ax^2) : ");
    scanf("%f", &a);
    printf("Enter the valve of b (bx) : ");
    scanf("%f", &b);
    printf("Enter the valve of constant c : ");
    scanf("%f", &c);
    x=((-b)+pow((pow(b,2)-4*a*c),0.5))/2*a;
    y=((-b)-pow((pow(b,2)-4*a*c),0.5))/2*a;
    printf("The roots of equation %.1fx^2 + %.1fx + %.1f = 0 are\n x = %f \t x = %f",a,b,c,x, y);
    return 0;
}