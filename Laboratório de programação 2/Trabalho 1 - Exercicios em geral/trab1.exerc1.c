/*Implemente uma fun��o que calcule as ra�zes de uma equa��o do segundo grau, do tipo ax2 + bx +c
= 0. Esta fun��o deve obedecer ao prot�tipo:
int raizes (float a, float b, float c, float* x1, float*x2)
Esta fun��o deve ter como valor de retorno o n�mero de ra�zes reais e distintas da equa��o. Se existirem
ra�zes reais, seus valores devem ser armazenados nas vari�veis apontados por x1 e x2.*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int raizes (float a, float b, float c, float *x1, float *x2){
	float delta=0;

	delta = pow(b,2)-(4*a*c);

	if(delta<0){
		printf("Sem raizes\n ");
	}else{
	*x1 = ((-b)+sqrt(delta))/(2*(a));
	*x2 = ((-b)-sqrt(delta))/(2*(a));

        printf("X1: %.2f \nX2: %.2f", *x1, *x2);
	}

	return x1, x2;
}

int main(){
	float p1, p2, p3, x1, x2;
	printf("Informe o parametro A: ");
	scanf("%f", &p1);
	printf("Informe o parametro B: ");
	scanf("%f", &p2);
	printf("Informe o parametro C: ");
	scanf("%f", &p3);


	raizes(p1, p2, p3, &x1, &x2);

}
