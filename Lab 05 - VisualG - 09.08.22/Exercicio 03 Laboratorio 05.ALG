Algoritmo "semnome"

Var
 hectares, praga, dinheiro, dinheiro2: inteiro
 desconto, desconto2, desconto3, desconto4, desconto5: real
 dinheiro3: inteiro
 dinheiro4: inteiro
 dinheiro5: inteiro
 dinheirou: real
 comando: caractere
Inicio
Enquanto (comando<> "Não") faca
 Escreval ("Qual tipo de praga a ser combatida? 1, 2, 3, 4 ou 5? ")
 leia (praga)
 escolha praga
         caso 1
         Escreval ("Quantos hectares do tipo 1? ")
         leia (hectares)
         dinheiro <- 500*hectares
                  se (hectares > 100) e (dinheiro > 75000) entao
                  desconto <- dinheiro*5/100
                  fimse
                  se (hectares > 100) e (desconto = 0) entao
                  desconto <- dinheiro*5/100
                  fimse
                  se (dinheiro > 75000) e (desconto =0) entao
                  desconto <- dinheiro*10/100
                  fimse
                  dinheirou <- dinheiro - desconto
                  caso 2
         Escreval ("Quantos hectares do tipo 2? ")
         leia (hectares)
         dinheiro2 <- 1000*hectares
                  se (hectares > 100) e (dinheiro2 > 75000) entao
                  desconto2 <- dinheiro2*5/100
                  fimse
                  se (hectares > 100) e (desconto2=0) entao
                  desconto2 <- dinheiro2*5/100
                  fimse
                  se (dinheiro2 > 75000) e desconto2 = 0) entao
                  desconto2 <- dinheiro2*10/100
                  fimse
                  dinheirou  <- dinheiro2 - desconto2
                   caso 3
         Escreval ("Quantos hectares do tipo 3? ")
         leia (hectares)
         dinheiro3 <- 1500*hectares
                  se (hectares > 100) e (dinheiro3 > 75000) entao
                  desconto3 <- dinheiro3*5/100
                  fimse
                  se (hectares > 100) e (desconto3=0) entao
                  desconto3 <- dinheiro3*5/100
                  fimse
                  se (dinheiro > 75000) e (desconto3=0) entao
                  desconto3 <- dinheiro3*10/100
                  fimse
                  dinheirou  <- dinheiro3 - desconto3
                  caso 4
         Escreval ("Quantos hectares do tipo 4? ")
         leia (hectares)
         dinheiro4 <- 2000*hectares
                  se (hectares > 100) e (dinheiro4 > 75000) entao
                  desconto4 <- dinheiro4*5/100
                  fimse
                  se (hectares > 100) e (desconto4=0) entao
                  desconto4 <- dinheiro4*5/100
                  fimse
                  se (dinheiro > 75000) e (desconto4=0) entao
                  desconto4 <- dinheiro4*10/100
                  fimse
                  dinheirou  <- dinheiro4 - desconto4
                  caso 5
         Escreval ("Quantos hectares do tipo 5? ")
         leia (hectares)
         dinheiro5 <- 3000*hectares
                  se (hectares > 100) e (dinheiro5 > 75000) entao
                  desconto5 <- dinheiro5*5/100
                  fimse
                  se (hectares > 100) e (desconto5=0) entao
                  desconto5 <- dinheiro5*5/100
                  fimse
                  se (dinheiro5 > 75000) e (desconto5=0) entao
                  desconto5 <- dinheiro5*10/100
                  fimse
                  dinheirou  <- dinheiro5 - desconto5
 fimescolha
 Escreval ("Você deseja combater mais pragas? Sim ou Não ")
 leia (comando)
 fimenquanto
           Escreval (" O valor total a ser pago é: ",dinheirou, " reais")
 

Fimalgoritmo