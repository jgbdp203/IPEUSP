#include <stdio.h>

int main(int argc, const char * argv[]) {

    float altura, base, area;

    printf("Informe a altura e a base do triângulo\n");
    scanf("%f %f", &altura, &base);

    area=(base*altura)/2;

    printf("A area eh: %.2f\n",area);

    return 0;
}


