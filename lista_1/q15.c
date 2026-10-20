#include <stdio.h> 

int main() {
    int disciplinas;
    float horas_totais, horas_por_disciplina;
    printf("Digite o numero de horas livres por semana: ");
    scanf("%f", &horas_totais);
    printf("Digite o numero de disciplinas: ");
    scanf("%d", &disciplinas);
    horas_totais -= 3.0; // Reserva 3 horas para imprevistos/descanso
    horas_por_disciplina = horas_totais / disciplinas;
    printf("Horas dedicadas a cada matéria: %.2f\n", horas_por_disciplina);
    return 0;
}