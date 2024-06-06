Algoritmo "intervalo"

Var
m, n, soma : inteiro

Inicio
soma <- 0
escreval ("Digite um número!")
leia (n)
escreval ("Digite um número maior que o anterior")
leia (m)
     enquanto (n>m) faca
     Escreval ("ERRO! Digite um número maior que o anterior! ")
     leia (m)
     fimenquanto
m <- m-1
     enquanto (n<m) faca
     n <- n+1
     soma <- soma + n
     escreval (n)
     fimenquanto
escreval ("A soma do intervalo é: ",soma)
Fimalgoritmo