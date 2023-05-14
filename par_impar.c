#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int N, i, numero;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero == 0)
        {
            printf("NULO\n");
        }
        else
        {
            if (numero % 2 == 0)
            {
                printf("PAR ");
            }
            else if (numero % 2 != 0)
            {
                printf("IMPAR ");
            }

            if (numero > 0)
            {
                printf("POSITIVO\n");
            }
            else
            {
                printf("NEGATIVO\n");
            }
            
            
        }
        
    }
    
    return 0;
}
