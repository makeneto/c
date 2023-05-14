#include <stdio.h>

int main()
{
    double preco_unitario, dinheiro_recebido, troco;
    int qtd;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco_unitario);

    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro_recebido);

    troco = dinheiro_recebido - (preco_unitario * qtd);

    printf("TROCO = %.2lf", troco);
    
    return 0;
}
