#include <stdio.h>

int main(){
    int n1, n2, n3, maior = 0;

    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2)
    {
        maior = n1;
        n1 = n2;
        n2 = maior;
    }

    if (n1 > n3)
    {
        maior = n3;
        n1 = n3;
        n3 = maior;
    }
    
    if (n2 > n3)
    {
        maior = n2;
        n2 = n3;
        n3 = maior;
    }
    
    printf("Esses sao os numero na ordem crescente: %d %d %d", n1, n2, n3);
    return 0;
}
