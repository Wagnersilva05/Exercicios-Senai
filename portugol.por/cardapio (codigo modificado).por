programa {
  funcao inicio() {
     inteiro opcao


    escreva("==== MENU ====")
    escreva("\nC�digo \tPrato \t\t\t\t\tPre�o")
    escreva("\n1 \t\t\tPicanha \t\t\tR$ 25,00")
    escreva("\n2 \t\t\tLasanha \t\t\t\tR$ 20,00")
    escreva("\n3 \t\t\tStrogonoff \t\t\tR$ 18,00")
    escreva("\n4 \t\t\tBIfe acebolado \tR$ 15,00 ")
    escreva("\n5 \t\tP�o com ovo \t\tR$ 5,00")
    escreva("\n==== FIM ====")
    escreva("\nDigite a op��o desejada: ")
    leia(opcao)


    escolha(opcao) {

      caso 1 : 
      escreva("Sua op��o foi: Picanha \tR$25,00")
      pare
      caso 2 :
      escreva("Sua op��o foi: Lasanha: \tR$20,00")
      pare 
      caso 3 :
      escreva("Sua op��o foi: Strogonoff \tR$18,00")
      pare
      caso 4:
      escreva("Sua op��o foi de: Bife acebolado \tR$15, 00")
      pare
      caso 5:
      escreva("Sua op��o foi: P�o com ovo \tR$5,00")
      pare
      caso contrario :
      escreva("Op��o invalida.")
      
 
    }
   
  }
}
