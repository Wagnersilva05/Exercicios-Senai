programa {
  funcao inicio() {
    inteiro primeiroNumero, segundoNumero,  resultado
    cadeia operador

    escreva ("Digite um n�mero: ")
    leia (primeiroNumero)

    escreva ("Digite outro n�mero: ")
    leia (segundoNumero)

    escreva ("Digite um operador: ")
    leia (operador)

    escolha (operador) {

    caso "+" :
         resultado = primeiroNumero + segundoNumero
         escreva("O resultado dessa opera��o �: ", resultado)
    pare
    caso "-" :
         resultado = primeiroNumero - segundoNumero
         escreva("O resultado dessa opera��o �: ", resultado)
    pare
    caso "*" :
         resultado = primeiroNumero * segundoNumero
         escreva("O resultado dessa opera��o �: ", resultado)
    pare 
    caso "/" :
         resultado = primeiroNumero / segundoNumero
         escreva("O resultado dessa opera��o �: ", resultado)
    pare
    caso contrario :
    escreva("A opera��o digitada � inv�lida.")

    }
  }
}
