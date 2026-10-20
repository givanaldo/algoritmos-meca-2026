#include <stdio.h>

int main() {
    float km_percorridos, dias, valor_pagar;
    printf("Digite a quantidade de km percorridos: ");
    scanf("%f", &km_percorridos);
    printf("Digite a quantidade de dias: ");
    scanf("%f", &dias);
    valor_pagar = (km_percorridos * 0.15) + (dias * 60);
    printf("Valor a pagar: R$ %.2f\n", valor_pagar);
    return 0;
}

