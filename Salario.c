#include <stdio.h>

int main(int argc, char const *argv[])
{
    double salario, n_salario, aumento;
    int porcentagem = 15;

    printf("Digite o seu salario: ");
    scanf("%lf", &salario);

    n_salario = (salario * porcentagem) / 100;
    aumento = aumento + salario;

    printf("Esse eh seu novo salario: %.0lfKz", aumento);

    return 0;
}


//Novo salario com aumento de 15%//