#include <stdio.h>

int main() {
    int dias, horas, minutos, segundos;
    printf("Digite os dias: ");
    scanf("%d", &dias);
    printf("Digite as horas: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    printf("Digite os segundos: ");
    scanf("%d", &segundos);
    int totalSegundos = (dias * 24 * 60 * 60) + (horas * 60 * 60) + (minutos * 60) + segundos;
    printf("Total de segundos: %d\n", totalSegundos);
    return 0;
}

