#include <stdio.h>

int main() {
    float preco, desconto, precoFinal;  
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &desconto);
    precoFinal = preco - (preco * (desconto / 100));
    printf("Preco final com desconto: R$ %.2f\n", precoFinal);
    return 0;
}

