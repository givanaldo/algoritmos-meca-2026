#include <stdio.h>

int main() {
    float temperatura;
    printf("Temperatura: ");
    scanf("%f", &temperatura);
    if (temperatura > 80.0) {
        printf("Acionar alarme!");
    }
    else {
        printf("Condicao normal.");
    }

    return 0;
}

