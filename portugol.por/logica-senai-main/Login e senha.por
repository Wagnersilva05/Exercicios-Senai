programa {
  /*
     Elabore um algoritimo para receber o login e senha de um usuário.
     Caso o usuário e senha estejam corretos, mostre a mensagem "Bem-vindo",
     caso contrário, mostre a mensagem "Login ou senha inválidos"
     */
    
  funcao inicio() { 
    // Declarando variáveis.
    cadeia login, senha, loginCadastrado = "Marta", senhaCadastrada = "123"

    // Solicitando dados para o usuário.
    escreva("Digite o login: ")
    leia(login)

    escreva("Digite a senha: ")
    leia(senha)

    // Verificando usuário e senha.
    se (login == loginCadastrado e senha == senhaCadastrada){
      escreva("Bem vindo!")
    }senao{
      escreva("Acesso negado!")
    }
  }
}
