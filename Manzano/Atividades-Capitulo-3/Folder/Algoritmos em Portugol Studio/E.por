programa Calculo_de_prestacao
{
	real Vc=0.0
	inteiro Ta=0
	real Tj=0.0
	real P=0
	funcao inicio()
	{
	escreva ("Olá, seja bem vindo a nossa plataforma, por favor, informe os dados solicidados.")
	escreva (" \n Insira o valor da conta em atraso:")
	leia (Vc)
	escreva ("\n Insira o tempo de atraso da conta:")
	leia (Ta)
	escreva ("\n Insira a taxa de juros:")
	leia (Tj)
	P=(Vc+(Vc*(Tj/100)*Ta))
	escreva ("\n O valor da sua prestação é de R$",P)
	}
	fim
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 455; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */