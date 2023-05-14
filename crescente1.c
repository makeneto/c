#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;

    printf("Digite dois numeros: \n");
    
    while (x != y)
    {
        scanf("%d", &x);
        scanf("%d", &y);

        if (x > y)
        {
            printf("DECRESCENTE!\n");
        }
        else
        {
            printf("CRESCESTE!\n");
        }
        
    }

    
    return 0;
}
