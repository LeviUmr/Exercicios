#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
  // declaração das variáveis celsius e fahrenheit
  float c,f;
  
int main() {
  setlocale(LC_ALL,"portuguese");
  printf("Digite a temperatura em graus fahrenheit: ");
  scanf("%f",&f);
  c = ((f-32)*5)/9;
  printf("\nA temperatura em Celsius é: %.1f",c);
	
}
