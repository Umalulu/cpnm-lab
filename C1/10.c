#include <stdio.h>
#include <math.h>

int main() {
    float r1, r2;
    int a, b, c, d;
    
    printf("ax2 + bx + c = 0\n Enter the value of\na=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    
    printf("Your equation is:- %dx2 + %dx + %d = 0\n", a, b, c);
    
    d = pow(b, 2) - 4 * a * c;

    if (d < 0) {
        printf("Roots are imaginary");
    } else if (d == 0) {
        r1 = -b / (2.0 * a);
        printf("Root of the equation is %f", r1);
    } else {
        r1 = (-b + sqrt(d)) / (2.0 * a);
        r2 = (-b - sqrt(d)) / (2.0 * a);
        printf("Roots of the equation are %f and %f", r1, r2);
    }
    return 0;
}
