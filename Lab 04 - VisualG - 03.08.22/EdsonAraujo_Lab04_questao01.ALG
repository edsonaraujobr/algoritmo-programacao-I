Algoritmo "exercicio1"

Var
   n1, n2, contador: inteiro


Inicio
   n2 <- 1
   contador <- 0
   Escreva ("Digite um numero inteiro: ")
   leia (n1)
   Enquanto (contador <>n1) faca
            Se (n1%n2=0) entao
            escreval (n2)
            fimse
   n2 <- n2 + 1
   contador <- contador + 1
   fimenquanto
              Se ((n1%1=0) e (n1%2=0)) entao
              Escreval (" Não é um numero primo")
              senao
              Escreval ("É um número primo!")
              fimse

Fimalgoritmo