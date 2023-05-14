#include<stdio.h>

int main(int argc, char const *argv[])
{
    int X, Y, soma = 0;

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    printf("Digite o valor de Y: ");
    scanf("%d", &Y);

    soma = X + Y;

    printf("Soma = %d", soma);
    return 0;
}
