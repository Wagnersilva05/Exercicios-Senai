programa
{
	
	funcao inicio()
	{
		real primeiroNumero, segundoNumero
   real soma, subtracao, multiplicacao, divisao


    //Solicitando dados para o usuario


   escreva("Digite o primeiro número: ")
   leia(primeiroNumero)


   escreva("Digite segundo número: ")
   leia(segundoNumero)




   // Realizando os calculos.
   soma = primeiroNumero + segundoNumero
   subtracao = primeiroNumero - segundoNumero
   multiplicacao = primeiroNumero * segundoNumero
   divisao = primeiroNumero / segundoNumero


   // Exbindo dados para o usuário.
   limpa()
   escreva("=== Exibibindo cáculos ===")
   escreva("\nPrimeiro número: ", primeiroNumero)
   escreva("\nSegunedo número: ", segundoNumero)
   escreva("\n=== Exibindo resultados ===")
   escreva("\nSoma: ", soma)
   escreva("\nSubtração: ", subtracao)
   escreva("\nMultipicação: ", multiplicacao)
   escreva("\nDivisão: ", divisao)





	}
}
