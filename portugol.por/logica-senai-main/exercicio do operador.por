programa {
  funcao inicio() {
    inteiro primeiroNumero, segundoNumero,  resultado
    cadeia operador

    escreva ("Digite um número: ")
    leia (primeiroNumero)

    escreva ("Digite outro número: ")
    leia (segundoNumero)

    escreva ("Digite um operador: ")
    leia (operador)

    escolha (operador) {

    caso "+" :
         resultado = primeiroNumero + segundoNumero
         escreva("O resultado dessa operação é: ", resultado)
    pare
    caso "-" :
         resultado = primeiroNumero - segundoNumero
         escreva("O resultado dessa operação é: ", resultado)
    pare
    caso "*" :
         resultado = primeiroNumero * segundoNumero
         escreva("O resultado dessa operação é: ", resultado)
    pare 
    caso "/" :
         resultado = primeiroNumero / segundoNumero
         escreva("O resultado dessa operação é: ", resultado)
    pare
    caso contrario :
    escreva("A operação digitada é inválida.")

    }
  }
}
