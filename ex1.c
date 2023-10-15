#include <stdio.h>
#include <math.h>

int main() {
    double num = 43200;
    double volum = 0;
    int tempo, horas;

    tempo = (double)sqrt(num * (volum + 3));
    horas = tempo/60;

    printf("o tempo necessario para esvaziar o tanque eh:\n");
    printf("em minutos = %i\n", tempo);
    printf("em horas = %i", horas);

    return 0;
}
