programa {
  funcao inicio() {
    inteiro dia
    cadeia diaSemana

    escreva("Qual é o dia da semana? ")
    leia(dia)


    escolha(dia){

      caso 1 :
      diaSemana = "Domingo"
      escreva(diaSemana, "\n Final de semana.")
      pare
      caso 2 :
      diaSemana = "Segunda-Feira"
      escreva(diaSemana, "\nDia útil.")
      pare
      caso 3 :
      diaSemana = "Terça-Feira"
      escreva(diaSemana, "\nDia útil.")
      pare
      caso 4 :
      diaSemana = "Quarta-Feira"
      escreva(diaSemana, "\nDia útil.")
      pare
      caso 5 :
      diaSemana = "Quinta-Feira"
      escreva(diaSemana, "\nDia útil")
      pare
      caso 6 :
      diaSemana = "Sexta-Feira"
      escreva(diaSemana, "\nFinal de semana.")
      pare
      caso 7 :
      diaSemana = "Sábado"
      escreva(diaSemana, "\nFinal de semana.")
      caso contrario:
      escreva("Dia inválido.")

    }
  }
}
