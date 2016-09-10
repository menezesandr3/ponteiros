#include <stdio.h>

//**********************************************************
//             Laborat�rio de Algoritmos II
// 
//		Programa exemplo de utiliza��o de ponteiros
// 
//					Autor Andr� M. S.
// 					Data: 09/09/2016
//**********************************************************

typedef struct 
{
	int indice;
	char nome [50];
	char telefone [15];
} entrada;

int main()
{
	// cria��o e inicializa��o das vari�veis e ponteiros
	entrada pagina_01;
	entrada *ptr = &pagina_01;
	
	//pagina_01.indice = 1;
	//pagina_01.nome = {"Andre Menezes da Silva"};
	//pagina_01.telefone = {"(55) 9687-5302"};
	
	printf ("\nInsira a Entrada: ");
	//scanf ("%i", &pagina_01.indice);
	scanf ("%i", (*ptr).indice);
	
	printf ("\nInsira o Nome: ");
	scanf ("%s", &pagina_01.nome);

	printf ("\nInsira ao Telefone: ");
	scanf ("%s", &pagina_01.telefone);
	
	printf ("\nEntrada: %i\n", pagina_01.indice);
	printf ("\nNome: %s\n", pagina_01.nome);
	printf ("\nNome: %s", ptr-> nome);
	printf ("\nTelefone: %s\n", pagina_01.telefone);

	//retorna 0
	return 0;
}
