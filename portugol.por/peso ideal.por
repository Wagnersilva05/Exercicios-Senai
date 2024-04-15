programa {
  funcao inicio() {
    cadeia sexo, masculino, feminino
    real altura
    real peso

    escreva("Digite o seu sexo: ")
    leia(sexo)

    escreva("Digite sua altura: ")
    leia(altura)

    escolha(sexo){

      caso masculino :
      peso = (72.7 * altura) - 58
      escreva("Seu peso ideal é: ", peso)
      pare
      caso feminino :
      peso = (62.1 * altura) - 44.7
      escreva("Seu peso ideal é: ", peso)
      pare
      caso contrario:
      ("ERRO!")

    }







  }
}
