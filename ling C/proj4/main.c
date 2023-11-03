#include <stdio.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Desenvolver um algoritmo que leia um número inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.*/

int main() {
	int numero;
	
	printf("Digite um numero:\n ");
	scanf("%d", &numero);
	
	
	if(((numero % 5)==0) && ((numero %3)==0)){
	printf("O numero e divisivel. \n");
		
	}
	else{
		printf("O numero nao e divisivel.\n");
	}
	return 0;
}
