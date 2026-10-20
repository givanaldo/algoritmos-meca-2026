#include <stdio.h>

int main() {
    float salario, aumento, novoSalario;
    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    printf("Digite o percentual de aumento: ");
    scanf("%f", &aumento);
    novoSalario = salario + (salario * (aumento / 100));
    printf("Novo salario: R$ %.2f\n", novoSalario);
    return 0;
}

