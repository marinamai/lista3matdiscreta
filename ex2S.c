#include <stdio.h>
#include <math.h>

int main(){

    double area, volume, km;
    double l = 10000, c = 75;

    area = l * c;

    printf("a area da mina é 10^4m² * 75 = %.lf m²\n ", area);
    printf("-------------------------------------------------\n");
    printf("Para calcular  volume multiplica-se largura x altura x comprimento:\n");

    volume = area * 26;

    printf("o Volume de terra tirada da mina por ano = %.lf m³\n", volume);
    printf("--------------------------------------------------\n");

    km = volume / pow(10, 9);

    printf("visto que 1m³ equivale a 1e-9km³ \ntemos %.4lfkm³ de terra tirada da mina por ano", km);

}
