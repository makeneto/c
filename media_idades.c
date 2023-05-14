#include <stdio.h>

int main(int argc, char const *argv[])
{
    int X, i = 0, soma  = 0;
    double media;

    printf("Digite as idades: \n");
    scanf("%d", &X);

    if (X < 0)
    {
        printf("IMPOSSIVEL CALCULAR");
    }

    else
    {
        while (X > 0)
        {
            soma = soma + X;
            i++;
            scanf("%d", &X);
        }
    }

    printf("MEDIA = %.2lf", media = soma / i);

    return 0;
}
