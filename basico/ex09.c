#include <stdio.h>
int main() {
    int idade;
    char nome[50]; // vetor de letras
    printf("Nome: ");
    fgets(nome, sizeof nome, stdin);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Info: %s # %d anos", nome, idade);
    return 0;
}