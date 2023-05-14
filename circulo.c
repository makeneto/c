#include<stdio.h>

int main(int argc, char const *argv[])
{
    double area, r;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    area = 3.14159 * (r * r);

    printf("AREA = %.3lf", area);
     return 0;
}
