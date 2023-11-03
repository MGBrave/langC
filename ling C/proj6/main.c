#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Desenvolver um algoritmo que leia os coeficientes (a , b e c) de uma equa��o do segundo grau e calcule suas ra�zes. O programa deve mostrar, quando poss�vel, o valor das ra�zes calculadas e a classifica��o das ra�zes.*/

int main(int argc, char *argv[]) {
	float a, b, c, delta, X1, X2;

scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);

delta = (pow(b,2) - 4 * a * c);
X1 = (-b + sqrt(delta))/(2 * a);
X2 = (-b - sqrt(delta))/ (2 * a);

if (delta == 0)
{
printf("RAIZ UNICA\n");
printf("X1 = %.2f\n",X1);
}

else if (delta < 0 )
{
printf("RAIZES IMAGINARIAS\n");
}

else if (delta > 0 )
{
printf("RAIZES DISTINTAS\n");
printf("X1 = %.2f\n",X1);
printf("X2 = %.2f\n",X2);
}

	return 0;
}
