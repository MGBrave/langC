#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	//Declara��o das vari�veis
	float raio, 
	pi=3.14,
	area;
	
	//Entrada de dados
	printf("Raio: ");
	scanf("%f", &raio);
	
	//C�lculo da �rea da circunfer�ncia
	area = pi * raio * raio;
	
	//Resultado	
	printf("Area: %2f m2 \n", area);
	
	return 0;
}
