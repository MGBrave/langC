#include <stdio.h>
#include <stdlib.h>
/*Manzano, Matos e Louren�o(2015) afirmam que a cria��o de um vetor � similar a uma vari�vel primitiva tendo que acrescentar apenas um n�mero entre colchetes indicando qual ser� o tamanho desse vetor por exemplo: int valores [15], neste caso, estamos criando 15 espa�os para armazenar valores inteiros. Cada elemento no vetor � acessado atrav�s do seu �ndice, que sempre come�ar� pelo valor zero, independentemente da linguagem de programa��o.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const int valor = 3;
	
int vetor[4]={2,4,6,8};

vetor [0] = vetor [0] * valor;

vetor [1] = vetor [1] * valor;

vetor [2] = vetor [2] * valor;

vetor [3] = vetor [3] * valor;

printf ("\n  %d - ", vetor [3]);

printf ("\n  %d -", vetor [2]);

printf ("\n  %d -", vetor [1]);

printf ("\n  %d .", vetor [0]);
	
	return 0;
}
