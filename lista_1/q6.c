#include <stdio.h>

int main() {
    float distancia, tempo, velocidade;
    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distancia);
    printf("Digite a velocidade media (em km/h): ");
    scanf("%f", &velocidade);
    tempo = distancia / velocidade;
    printf("Tempo gasto: %.2f horas\n", tempo);
    return 0;
}

