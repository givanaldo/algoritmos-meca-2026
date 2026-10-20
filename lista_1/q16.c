// Faça um programa que solicite o primeiro nome do usuário e depois o seu sobrenome. O programa deve gerar e exibir uma sugestão de login (nome de usuário) juntando o nome, o sobrenome e o número total de caracteres que compõem o nome completo.
//Exemplo: se o usuário digitar "Ana" e "Silva", o login sugerido será "AnaSilva8", pois há 8 letras no total.

#include <stdio.h>

int main() {
    char nome[100], sobrenome[100];
    int total_caracteres;

    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    total_caracteres = strlen(nome) + strlen(sobrenome);

    printf("Sugestão de login: %s%s%d\n", nome, sobrenome, total_caracteres);

    return 0;
}

