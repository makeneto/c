#include <stdio.h>

int main(int argc, char const *argv[])
{
    int distancia;
    double combustivel_gasto, consumo_medio;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia);

    printf("Valor por hora: ");
    scanf("%lf", &combustivel_gasto);

    consumo_medio = distancia / combustivel_gasto;

    printf("Consumo medio = %.3lf", consumo_medio);
    return 0;
}
