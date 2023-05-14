#include<stdio.h>

int main(int argc, char const *argv[])
{
    double n1, n2, nota_final;

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);

    nota_final = n1 + n2;

    printf("NOTA FINAL = %.1lf\n", nota_final);

    if (nota_final < 60.00)
    {
        printf("APROVADO");
    }
    
    return 0;
}
