#include <stdio.h>
#include <math.h>

int main() {
    float s2;

    printf("o salário de um profissional dessa empresa com 2 anos de tempo de serviço substituindo na fórmula, temos:\n");

    s2 = 1800* pow(1.03, 2);

    printf("S(2) = 1.800 . (1,03)² = %.2f reais", s2);

    return 0;
}
