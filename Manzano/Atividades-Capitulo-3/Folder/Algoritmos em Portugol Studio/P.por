programa reajuste
{
	real Sm=0.0
	real Vr=0.0
	inteiro Sn=0
	real perc=0.0
	
	
	funcao inicio()
	{
		escreva("Olá, insira os dados para o cálculo do novo salário com reajustes.")
		escreva (" \n Insira o valor do seu salário: ")
		leia (Sm)
		escreva ("\n Insira o valor do reajuste em forma de número inteiro: ")
		leia (Vr)
		perc = (Vr/100)
		Sn=(Sm + Vr)
		escreva ("\n Seu salário com o reajuste é de: ", Sn)
		
	}
	fim
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 426; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */