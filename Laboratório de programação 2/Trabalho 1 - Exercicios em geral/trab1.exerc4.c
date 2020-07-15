/*Desenvolva um algoritmo que efetue a leitura de tr�s valores para os lados de um tri�ngulo,
considerando lados como: A, B e C. O algoritmo dever� verificar se os lados fornecidos formam realmente
um tri�ngulo (cada lado � menor que a soma dos outros dois lados). Se for esta condi��o verdadeira, dever� ser indicado qual tipo de tri�ngulo foi formado: is�sceles (dois lados iguais e um diferente), escaleno (todos
os lados diferentes) ou equil�tero (todos os lados s�o iguais).
OBS: h� diversas formas de estruturar este exerc�cio. Sugest�o de estrutura do tipo Triangulo:
struct triangulo
{
int ladoA;
int ladoB;
int ladoC;
bool ehTriangulo;
char tipo[20];
};
typedef struct triangulo Triangulo;
Sugest�o de prot�tipo:
O main l� os lados e chama a fun��o: Triangulo verificaTriangulo (Triangulo t). Esta fun��o verifica se �
um tri�ngulo e se for, qual o seu tipo correspondente. Altera os campos ehTrinangulo e tipo da struct
triangulo, e retorna a estrutura alterada para o main. O main imprime se os lados informados comp�em um
tri�ngulo e qual o seu tipo.*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
	int ladoA;
	int ladoB;
	int ladoC;
	bool ehTriangulo;
	char tipo[20];
}triangulo;
triangulo Triangulo;

void verificaTriangulo(int a, int b, int c){
	Triangulo.ladoA = a;
	Triangulo.ladoB = b;
	Triangulo.ladoC = c;
	Triangulo.ehTriangulo = 0;

	if(((a+b)>c) && ((a+c)>b) && ((b+c)>a)){
		Triangulo.ehTriangulo = 1;
		if(((a==b) && (c!=a) && (c!=b)) || ((a==c) && (b!=a) && (b!=c)) || ((b==c) && (a!=b) && (a!=c))){
			strcpy(Triangulo.tipo,  "Isoceles");

		}else if((a!=b) && (a!=c) && (b!=c)){
			strcpy(Triangulo.tipo,  "Escaleno");

		}else if((a==b) && (a==c) && (b==c)){
			strcpy(Triangulo.tipo,  "Equilatero");
		}
	}
}
void imprimir(){
    if(Triangulo.ehTriangulo==1){
        printf("Eh triangulo\n");
        printf("%s\n", Triangulo.tipo);
    }else{
        printf("Nao eh triangulo");
    }
}
int main() {
	int a=0, b=0, c=0;
	printf("Lado A do triangulo: ");
	scanf("%d", &a);
	printf("Lado B do triangulo: ");
	scanf("%d", &b);
	printf("Lado C do triangulo: ");
	scanf("%d", &c);

	verificaTriangulo(a, b, c);
	imprimir();
	return 0;
}
