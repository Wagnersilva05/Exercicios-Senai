programa {
  funcao inicio() {
    cadeia picanha , lasanha, strogonoff, bifeAcebolado, paoComOvo, menu
    real valor

    escreva("MENU:\n Picanha\n Lasanha\n Strognoff\nBife Acebolado\n Pão com ovo\n\n")
    escreva("Escolha o seu prato: ")
    leia(menu)

    picanha = "picanha"
    lasanha = "lasanha"
    strogonoff = "Strogonoff"
    bifeAcebolado = "bife acebolado"
    paoComOvo = "pao com ovo"


   

    escolha(menu){
     
     caso picanha :
     
     escreva(picanha, " R$25,00")
     pare
     caso lasanha :
     escreva(lasanha, " R$20,00")
     pare
     caso strogonoff :
     escreva(strogonoff, " R$18,00")
     pare
     caso bifeAcebolado : 
     escreva(bifeAcebolado, " R$15,00")
     pare
     caso paoComOvo : 
     escreva(paoComOvo, " R$5,00")
     caso contrario:
     escreva("prato não disponivel")
    }
  }
}
