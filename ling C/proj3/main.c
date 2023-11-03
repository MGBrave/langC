#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	//Declaração das variáveis
	float raio, 
	pi=3.14,
	area;
	
	//Entrada de dados
	printf("Raio: ");
	scanf("%f", &raio);
	
	//Cálculo da área da circunferência
	area = pi * raio * raio;
	
	//Resultado	
	printf("Area: %2f m2 \n", area);
	
	return 0;
}
