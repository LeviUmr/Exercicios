#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
  // declara��o das vari�veis celsius e fahrenheit
  float c,f;
  
int main() {
  setlocale(LC_ALL,"portuguese");
  printf("Digite a temperatura em graus fahrenheit: ");
  scanf("%f",&f);
  c = ((f-32)*5)/9;
  printf("\nA temperatura em Celsius �: %.1f",c);
	
}
