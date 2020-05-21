programa
{
	inteiro VotosA=0
	inteiro VotosB=0
	inteiro VotosC=0
	inteiro TotalVal=0
	inteiro VotosVal=0
	inteiro VotosNu=0
	inteiro VotosBran=0
	inteiro Somatudo=0
	inteiro PorcVval=0
	inteiro PorcVvalA=0
	inteiro PorcVvalB=0
	inteiro PorcVvalC=0
	inteiro PorcNu=0
	inteiro PorcBran=0
	
	funcao inicio()
	{
		escreva ("Olá, seja bem vindo a nossa plataforma. \n Aqui relacionamos a contabilização dos votos para as eleição sindical para o cargo de presidência.")
		escreva ("\n Por favor, informe os dados solicitados abaixo: ")
		escreva ("\nQuantos votos foram para o canditado A? ")
		leia (VotosA)
		escreva ("\nQuantos votos foram para o canditado B? ")
		leia(VotosB)
		escreva ("\nQuantos votos foram para o canditado C? ")
		leia(VotosC)
		TotalVal=(VotosA+VotosB+VotosC)
		escreva ("\n Quantos foram os votos nulos? ")
		leia (VotosNu)
		escreva ("\n Quantos foram os votos em branco? ")
		leia(VotosBran)
		
		Somatudo=(TotalVal+VotosNu+VotosBran)
		PorcVval=((TotalVal*100)/Somatudo)
		PorcVvalA=((VotosA*100)/Somatudo)
		PorcVvalB=((VotosB*100)/Somatudo)
		PorcVvalC=((VotosC*100)/Somatudo)
		PorcNu=((VotosNu*100)/Somatudo)
		PorcBran=((VotosBran*100)/Somatudo)
		
          escreva ("O total de votos foram de ", Somatudo)
          escreva ("\n A quantidade de votos válidos  foram de ", TotalVal, " e sua porcentagem em relção a todos os eleitores foi de aproximadamente ", PorcVval, "%.")		
		escreva ("\n A quantidade de votos do candidato A foi de ", VotosA, " e sua porcentagem em relção a todos os eleitores foi de aproximadamente ", PorcVvalA, "%.")	
		escreva ("\n A quantidade de votos do candidato B foi de ", VotosB, " e sua porcentagem em relção a todos os eleitores foi de aproximadamente ", PorcVvalB, "%.")
          escreva ("\n A quantidade de votos do candidato C foi de ", VotosC, " e sua porcentagem em relção a todos os eleitores foi de aproximadamente ", PorcVvalC, "%.")		
          escreva ("\n A quantidade de votos nulos foram de ", VotosNu, " e sua porcentagem em relção a todos os eleitores foi de aproximadamente ", PorcNu, "%.")		
          escreva ("\n A quantidade de votos em btanco foram de ", VotosBran, " e sua porcentagem em relção a todos os eleitores foi de aproximadamente ", PorcBran, "%.")	
          escreva("\n Obrigado por utilizar nossa plataformar para cálculo de votos, até mais ;) !!")	
		
		}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 2360; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */