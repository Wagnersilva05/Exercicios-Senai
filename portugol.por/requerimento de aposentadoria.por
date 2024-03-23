programa {
  funcao inicio() {
    inteiro idade, tempoTrabalho, nascimento
    real matricula

    escreva("Digite sua matricula: ")
    leia(matricula)

    escreva("Digite a ano de nascimento: ")
    leia(nascimento)

    escreva("digite seu tempo de trabalho: ")
    leia(tempoTrabalho)

    idade = 2024 - nascimento

    escreva("\nMatricula: ", matricula)
    escreva("\nAno de nascimento: ", nascimento)
    escreva("\nIdade: ", idade)
    escreva("\nTempo de trabalho: ", tempoTrabalho)

  


    se(idade >= 65 ou tempoTrabalho >= 30){
      escreva("\nRequerer aposentadoria")
    }senao{
      escreva("\nNão requerer aposentadoria")
    }



  


  }
}
