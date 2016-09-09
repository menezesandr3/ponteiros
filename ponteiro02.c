#include <stdio.h>

//**********************************************************
//             Laboratório de Algoritmos II
// 
//		Programa exemplo de utilização de ponteiros
// 
//					Autor André M. S.
// 					Data: 08/09/2016
//**********************************************************

int main()
{
	// criação e inicialização das variáveis
	int variavel_1 = 1, variavel_2 = 2, aux = 0;
	char controle = 'n', descarga;
	
	// criação dos ponteiros
	int *ponteiro_1, *ponteiro_2;
	
	// enquanto
	while (1)
	{
		// inicialização dos ponteiros
		ponteiro_1 = &variavel_1; // ponteiro_1 recebe o endereço de variavel_1
		ponteiro_2 = &variavel_2; // ponteiro_2 recebe o endereço de variavel_2
		
		// exib o valor contido em cada variavel a partir do endereço contido 
		//nos ponteiros
		
		printf ("\nvariavel_1 = %i", *ponteiro_1);
		printf ("\nvariavel_2 = %i", *ponteiro_2);
		
		//passa o valor da variavel_1 para a variavel auxiliar
		aux = *ponteiro_1;
		//o valor da variavel_1 passa a ser o valor da variavel_2
		*ponteiro_1 = *ponteiro_2;
		//o valor da Variavel_2 passa a ser o valor da variavel auxiliar
		*ponteiro_2 = aux;
		
		printf (" \n\nSwamp variavel_1: %d", *ponteiro_1);
		printf (" \nSwamp variavel_2: %d", *ponteiro_2);
		
		// exibe a solicitação de controle
		printf ("\n\nDeseja finalizar o programa? (s/n)");
		scanf ("%c", &controle);
		
		// se o comando indicar a finalização, finaliza o loop
		if (controle == 's') break;
		
		// exibe a solicitação de um valor
		printf ("\nDigite um valor para a variavel_1: ");
		// efetua a leitura do valor e transfere o valor para a variavel_1
		scanf ("%i", ponteiro_1);
		//exibe a solicitação de um valor
		printf ("\nDigite um valor para a variavel_2: ");
		// efetua a leitura do valor e transfere o valor para a variavel_2
		scanf ("%i%c", ponteiro_2, &descarga);
	}
	return 0;
}
