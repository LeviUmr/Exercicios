#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float c = 0; //celsius
float f = 0;//fahrenheit

int main(){
  setlocale(LC_ALL,"Portuguese");
  printf("digite a temperatura em graus Celsius: ");
  scanf("%f",&c);
  f = c*9/5+32;
  printf("A temperatura em graus Fahrenheit é %.2f",f);  
}
