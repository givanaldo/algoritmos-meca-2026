#include <stdio.h>

int main() {
    float distancia, duracao, valor_total;
    printf("Digite a distancia percorrida em km: ");    
    scanf("%f", &distancia);
    printf("Digite a duracao da viagem em minutos: ");
    scanf("%f", &duracao);
    valor_total = 4.00 + distancia * 1.5 + duracao * 0.25;
    printf("Valor total da viagem: R$ %.2f\n", valor_total);
    return 0;
}

