programa
{
	inteiro A=0
	inteiro B=0
	inteiro C=0
	inteiro D=0
	inteiro c1a=0
	inteiro c2a=0
	inteiro c3a=0
	inteiro c1p=0
	inteiro c2p=0
	inteiro c3p=0
	funcao inicio()
	{
		
		escreva("Olá. Por favor, insira os valores abaixo:")
		escreva ("\n Valor de A: ")
		leia (A)
		escreva ("\n Valor de B:")
		leia (B)
		escreva (" \n Valor de C:")
		leia (C)
		escreva (" \n Valor de D:")
		leia (D)
		c1a=((A+B)+(A+C)+(A+D) )
		c2a=((B+C)+(B+D))
		c3a=(C+D)
		c1p=((A*B)*(A*C)*(A*D))
		c2p=((B*C)*(B*D))
		c3p=C*D

	escreva ("O resultado das combinações de adição foram o seguinte:")
	escreva (" \n Combinação 1: ", c1a)
	escreva ("\n Combinação 2: ",c2a)
	escreva ("\nCombinação 3: ",c3a)	
	escreva (" \n A seguir, as combinações da operação de multiplicação:")
	escreva ("\n Cobinação 1.1: ",c1p)	
	escreva ("\n Combinação 2.2: ",c2p)
	escreva ("\n Comvinação 3.3: ", c3p)

	escreva ("\n Muito obrigado por usar nosso software!!")
	}
	fim
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 272; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */