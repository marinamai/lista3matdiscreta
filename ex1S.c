#include <stdio.h>
#include <math.h>

int main() {
    double micron, km;
    int converter;

    printf("        Em 1km existe 1.10^9 microns       \n");
    printf("---------------------------------------------\n");
  do{
    printf("\nse deseja converter outros valores de km para \nmicrometros digite 1 ou 2 para encerrar: ");
  scanf("%i", &converter);
  
    switch(converter){
      case 1:
    printf("\nDigite um valor em km para converter em micrometros: ");
    scanf("%lf", &km);

    micron = km * 1*pow(10, 9);

    printf("Existe %e micrometros em %.0lf km", micron, km);
    printf("\n----------------------------------------------\n");
  break;
      case 2:
      printf("programa encerrado");
      break;
      
      }
  }while(converter <2);
}
