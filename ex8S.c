#include <stdio.h>
#include <math.h>
int main(){
   double si;
   double cal = 1;  
   double joule = 4.18;  
   double segundos = 60; 
   double m2 = 0.0001; 

   si = (cal * joule) / (segundos * m2);


  printf("Quantidade em SI = %.1lf J m-2 s-1", si);

}
