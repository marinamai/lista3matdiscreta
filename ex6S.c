#include <stdio.h>
#include <math.h>
int main(){

    double w, joule, j_ev;
    double cv = 5, t = 10 * 3600, eV = 1.6 * pow(10, 19);//tempo em segundos;

    w = cv * 735.5;
    printf("convertendo de cv para w = %.1lf", w);

    joule = (735.5 * t) / 2;
    printf("\ncalculando a energia em joule = %.0lf J", joule);

    j_ev = eV * joule * 4;
    printf("\nconverter joule para  elétron-volts = %e eV", j_ev);

}
