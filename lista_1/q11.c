#include <stdio.h>

int main() {
    float valor_reais, valor_dolares, cotacao_dolar;
    printf("Digite o valor em reais: ");
    scanf("%f", &valor_reais);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao_dolar);
    valor_dolares = valor_reais / cotacao_dolar;
    printf("Valor em dolares: US$ %.2f\n", valor_dolares);
    return 0;
}

