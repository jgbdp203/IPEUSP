#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {

    float a, b, c, delta, x1, x2;

    printf("Informe a, b e c da equacao\n");
    scanf("%f %f %f", &a, &b, &c);

    delta=(b*b-4*a*c);

    if (delta<0)
        printf("Nao existe raizes nos reais");
    else{
        x1=(-b+sqrt(delta))/2*a;
        x2=(-b-sqrt(delta))/2*a;
        printf("x'= %.2f e x''= %.2f\n", x1,x2);
    }
    return 0;
}
