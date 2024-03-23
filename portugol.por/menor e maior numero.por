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
      maiorNumero = segundoNumero
    }

    se (primeiroNumero < segundoNumero e primeiroNumero < terceiroNumero){
      maiorNumero = terceiroNumero
    }senao se(segundoNumero < primeiroNumero e segundoNumero < terceiroNumero){
    menorNumero = terceiroNumero}
    senao{
      menorNumero = terceiroNumero
    }

    escreva("\nO maior numero foi: ", maiorNumero)
    escreva("\nO menor numero foi: ", menorNumero)
    






  }
}
