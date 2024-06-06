Algoritmo "Media"
// Disciplina   : Linguagem e Lógica de Programação
// Professor   : Esqueci o nome
// Descrição   : Calcular a média de um aluno para ver se o mesmo foi aprovado
// Autor(a)    : Edson Araujo
// Data atual  : 19/07/2022
Var
res: caracter
n1,n2,n3,n4: real
media: real
Inicio
escreva("Digite suas quatro notas: ")
leia(n1,n2,n3,n4)
media <- ((n1+n2+n3+n4)/4)
se (media >=7) então
res <- "Aprovado"
senão
res <- "Reprovado"
fimse
escreva("Resultado é ",res)
Fimalgoritmo