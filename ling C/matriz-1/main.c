#include <stdio.h>
#include <stdlib.h>
/*Manzano, Matos e Lourenço(2015) afirmam que a criação de um vetor é similar a uma variável primitiva tendo que acrescentar apenas um número entre colchetes indicando qual será o tamanho desse vetor por exemplo: int valores [15], neste caso, estamos criando 15 espaços para armazenar valores inteiros. Cada elemento no vetor é acessado através do seu índice, que sempre começará pelo valor zero, independentemente da linguagem de programação.*/
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
