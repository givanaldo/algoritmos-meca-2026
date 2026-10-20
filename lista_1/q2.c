#include <stdio.h>

int main() {
    int metros;
    printf("Digite o valor de metros: ");
    scanf("%d", &metros);
    printf("Valor em milimetros: %d mm\n", metros * 1000);
    return 0;
}

