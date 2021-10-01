programa
{
	//declarando variáveis

	real h = 0.0 //Altura
	
real r = 0.0 //Raio
	real v = 0.0 //Volume
	const real pi = 3.14
	 
	funcao inicio()
	{
		escreva("Digite a altura do cilindro em centímetros: ")
		leia(h)
		
		escreva("Digite o raio do cilindro em centímetros: ")
		leia(r)
		
		v = pi*(r*r)*h
		escreva("o volume do cilindro é "+v+" centímetros cúbicos")
	}
}
