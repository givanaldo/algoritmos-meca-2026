#include <stdio.h>

int main() {
    int media; // 0 - 100
    printf("Digite a media: ");
    scanf("%d", &media);
    if (media >= 60) {
        printf("Aprovado\n");
        printf("Parabens!");
    }
    else {
        printf("Recuperacao\n");
        printf("Estude mais!");
    }
    return 0;
}

