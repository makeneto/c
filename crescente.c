#include<stdio.h>

int main(int argc, char const *argv[])
{
    int X, Y;

    while (X != Y)
    {
        printf("Digite dois numeros: \n");
        scanf("%d", &X);
        scanf("%d", &Y);

        if (X > Y)
        {
            printf("DECRESCENTE!\n");
        }
        else
        {
            printf("CRESCENTE!\n");
        }
    }
    
    return 0;
}
