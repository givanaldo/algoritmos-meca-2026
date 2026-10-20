#include <stdio.h>

int main() {
    float temperaturaC, temperaturaF;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaC);
    temperaturaF = (9 * temperaturaC / 5) + 32;
    printf("Temperatura em Fahrenheit: %.2f\n", temperaturaF);
    return 0;
}

