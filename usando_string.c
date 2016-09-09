#include <stdio.h>

//**********************************************************
//             Laborat�rio de Algoritmos II
// 
//		Programa exemplo de utiliza��o de ponteiros
// 
//					Autor Andr� M. S.
// 					Data: 09/09/2016
//**********************************************************

int main()
{
	// cria��o e inicializa��o das vari�veis e ponteiros
	char minha_string [] = {"1234567890"};
	//char minha_string [] = {'1','2','3','4','5','6','7','8','9','0'};
	char *meu_ponteiro = &minha_string;
	
	//exibe o valor contido em cada posi��o da string a partir do endere�o 
	// contido no ponteiro
	do
	{
		printf ("\n O meu_ponteiro aponta para o valor: %c\n", *meu_ponteiro);
		meu_ponteiro++;
	}
	 
	while (*meu_ponteiro != 0);
	
	printf ("\n O tamanho da minha_string eh: %i\n", sizeof (minha_string));
	 
	return 0;
}
