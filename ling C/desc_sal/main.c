#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float salario, inss, ir, sal_liquido;/*primeiro é preciso definir as variáveis*/
	printf("Digite seu salario bruto: ");
	scanf("%f", &salario);
	
	if(salario <= 1692.72)
	{		
		inss = salario * 0.08;
		
	}
	else
	if(salario >= 1693.73 && salario <=2822.9){
		inss = salario * 0.09;
	}
	sal_liquido = (salario -inss) - ir;
	printf("\n Desconto Inss: %f\n ", inss);
	
	printf("\n Salario liquido %2.f\n", sal_liquido);
	
	
	
	return 0;
}
