#include <stdio.h>

int main()
{
    int rotacao;
    float temperatura;
    char estado;

    printf("Rotacao do motor: ");
    scanf("%d", &rotacao);
    printf("Temperatura do motor: ");
    scanf("%f", &temperatura);
    printf("Estado do motor (L | D): ");
    scanf(" %c", &estado);

    printf("--- PAINEL ---\n");
    printf("Rotacao: %d rpm\n", rotacao);
    printf("Temperatura: %.1f C\n", temperatura);
    printf("Estado: %c\n", estado);
    return 0;
}
