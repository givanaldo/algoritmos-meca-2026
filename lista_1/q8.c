#include <stdio.h>

int main() {
    float temperaturaC, temperaturaF;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperaturaF);
    temperaturaC = (temperaturaF - 32) * 5 / 9;
    printf("Temperatura em Celsius: %.2f\n", temperaturaC);
    return 0;
}

