#include <stdio.h>

void ler_texto(char *buffer, int length){
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
    }

int main(int argc, char const *argv[])
{
    char nome[50];
    double valor_hora, pagamento;
    int horas_trabalhadas;

    printf("Nome: ");
    ler_texto(nome, 50);
    printf("Valor por hora: ");
    scanf("%lf", &valor_hora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);

    pagamento = valor_hora * horas_trabalhadas;

    printf("O pagamento para %s deve ser %.2lf", nome, pagamento);
    return 0;
}
