programa {
  funcao inicio() {
    inteiro primeiroNumero, segundoNumero, terceiroNumero
    inteiro menorNumero, maiorNumero

    escreva("Digite o primeiro numero: ")
    leia(primeiroNumero)
    
    escreva("Digite o segundo numero: ")
    leia(segundoNumero)

    escreva("Digite o tereiro numero: ")
    leia(terceiroNumero)

    se(primeiroNumero > segundoNumero e primeiroNumero > terceiroNumero){
    maiorNumero = primeiroNumero
    }senao se(segundoNumero > primeiroNumero e segundoNumero > terceiroNumero){
      maiorNumero = segundoNumero
    }senao{
      maiorNumero = terceiroNumero
    }

    se (primeiroNumero < segundoNumero e primeiroNumero < terceiroNumero){
      menorNumero = primeiroNumero
    }senao se(segundoNumero < primeiroNumero e segundoNumero < terceiroNumero){
    menorNumero = segundoNumero}
    senao{
      menorNumero = terceiroNumero
    }

    escreva("\nO maior numero foi: ", maiorNumero)
    escreva("\nO menor numero foi: ", menorNumero)
    






  }
}
