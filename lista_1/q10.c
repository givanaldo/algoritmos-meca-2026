#include <stdio.h>

int main() {
    float valor_conta, quant_pessoas, valor_por_pessoa;
    printf("Digite o valor da conta: ");
    scanf("%f", &valor_conta);
    printf("Digite a quantidade de pessoas: ");
    scanf("%f", &quant_pessoas);
    valor_por_pessoa = (valor_conta + valor_conta * 0.1) / quant_pessoas;
    printf("Valor da conta com 10%% de gorjeta: R$ %.2f\n", valor_conta + valor_conta * 0.1);
    printf("Valor por pessoa: R$ %.2f\n", valor_por_pessoa);
    return 0;
}

