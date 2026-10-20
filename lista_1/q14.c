#include <stdio.h>

int main() {
    int pessoas;
    float ovos, farinha, acucar;
    printf("Digite o numero de pessoas: ");
    scanf("%d", &pessoas);  
    ovos = pessoas * 3.0 / 4.0;
    farinha = pessoas * 2.0 / 4.0;
    acucar = pessoas * 1.5 / 4.0;
    printf("Quantidade de ovos necessarios: %.2f\n", ovos);
    printf("Quantidade de farinha necessaria: %.2f xicaras\n", farinha);
    printf("Quantidade de acucar necessaria: %.2f xicaras\n", acucar);
    return 0;
}

