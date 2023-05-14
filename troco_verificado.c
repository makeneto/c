#include <stdio.h>

int main()
{
    double preco_produto, dinheiro_Recebido, faltam, troco;
    int qtd_comprada;

    printf("Preço unitario do produto: ");
    scanf("%lf", &preco_produto);

    printf("Quantidade comprada: ");
    scanf("%d", &qtd_comprada);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro_Recebido);

    if (preco_produto * qtd_comprada > dinheiro_Recebido){

        faltam = preco_produto * qtd_comprada - dinheiro_Recebido;

        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", faltam);
    }
    
    else{
        troco = dinheiro_Recebido - (preco_produto * qtd_comprada);

        printf("TROCO = %.2lf", troco);
    }
    return 0;


}
