#include <stdio.h>

int main()
{
    int sensor, motor;
    printf("Sensor e motor (0 ou 1): ");
    scanf("%d %d", &sensor, &motor);
    printf("Estado do sensor | motor: %d %d", sensor, motor);
    return 0;
}
