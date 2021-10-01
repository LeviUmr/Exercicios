#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  float h=0,v=0,r=0;//altura, volume, raio
  const float pi = 3.14;
  
int main() {
  setlocale(LC_ALL,"portuguese");
  setbuf(stdin,NULL);
  printf("Digite a altura do cilindro em centímetros: ");
  scanf("%f",&h);
  setbuf(stdin,NULL);
  printf("\nDigite o raio do cilindro em centímetros: ");
  scanf("%f",&r);
  v= pi*(r*r)*h;
  printf("\nO volume do cilindro é %.2f centímetros cúbicos",v);
    
}
