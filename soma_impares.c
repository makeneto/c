#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int N, i, dentro = 0, fora = 0, numeros;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros);

        if (numeros >= 10 && numeros <= 20)
        {
            dentro++;
        }
        else
        {
            fora++;
        }
        
    }

    printf("%d DENTRO\n", dentro);
    printf("%d FORA\n", fora);

    return 0;
}
