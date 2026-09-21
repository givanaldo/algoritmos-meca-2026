#include <stdio.h>

int main()
{
    char nome[50];
    printf("Nome do operador: ");
    fgets(nome, sizeof nome, stdin);
    printf("Identidade do operador: %s", nome);
    return 0;
}
