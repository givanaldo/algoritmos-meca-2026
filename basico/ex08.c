#include <stdio.h>

int main()
{
    char nome[20];
    printf("Nome: ");
    fgets(nome, sizeof nome, stdin);
    printf("Nome digitado: %s", nome);
    return 0;
}


