#include <iostream>

//**********************************************************
//             Laborat�rio de Algoritmos II
// 
//		Programa exemplo de utiliza��o de ponteiros
// 
//					Autor Andr� M. S.
// 					Data: 02/09/2016
//**********************************************************

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int numero = 2;
int *ponteiro_numero = &numero;

int main(int argc, char** argv) {
	
	printf ("Insira um numero: ");
	
	//scanf ("%i", &numero);
	scanf ("%i", ponteiro_numero);
	
	//printf ("O numero inserido foi: %i!\n", numero);
	printf ("O numero inserido foi: %i!\n", *ponteiro_numero);
	
	return 0;
}
