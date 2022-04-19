#include<stdio.h>

int main(int argc, const char * argv[]) {

float a, b, c;

printf("Informe os lados do triangulo\n");
scanf("%f %f %f", &a, &b, &c);

if(a!=b && b!=c)
    printf("O triangulo eh escaleno\n");
else {

    if(a==b && b!=c)
        printf("o triangulo eh isoceles");

    if(a==b && b==c)
        printf("o triangulo eh equilatero");
}

return 0;
}
