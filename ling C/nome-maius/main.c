
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[30];
	int i;
	
	printf("Digite o sobrenome do aluno(a): \n");
	
	gets(nome);
	
	for (i=0; nome[i]!= ' '; i++)
	
	nome[i] = toupper(nome[i]);
	
	printf("\n\nSobrenome convertido: %s\n\n", nome);
	
	getch();
	
	return 0;
}
