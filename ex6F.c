#include <stdio.h>
#include <math.h>

int main() {

    double P1 = 10, P2 = 20, Db;

    Db = 10 * log10(P2 / P1);

    printf("sao necessarios %.2lf Db para dobrar a potencia.", Db);

    return 0;
}
