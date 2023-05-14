#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, i, multiplicacao;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &N);

    
    for (i = 1; i < 12; i++)
    {
        multiplicacao = N * i;
        printf("%d x %d = %d\n", N, i, multiplicacao);
    }
    
        return 0;
}
