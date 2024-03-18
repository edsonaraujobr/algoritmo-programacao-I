#include <iostream>
#include "cabecalho.h"
using namespace std;

int main()
{
    int escolha, resultado, pontuacaoJogador01 = 0, pontuacaoJogador02 = 0;

    for (int i = 0; i < 10; i++) {
        cout << "CARA ou COROA?\n1 para CARA\n2 para COROA";
        if (i % 2 == 0) {
            cout << "\nJogador 01, digite sua escolha: ";
            cin >> escolha;
            if (escolha == 1) {
                cout << "\nJogador 01: CARA \nJogador 02: COROA";
                resultado = lancamentos(1,2);
            } else if(escolha == 2) {
                cout << "\nJogador 01: COROA \nJogador 02: CARA";
                resultado = lancamentos(2,1);
            }
        } else {
            cout << "\n\nJogador 02, digite sua escolha: ";
            cin >> escolha;
            if (escolha == 1) {
                cout << "\nJogador 01: COROA \nJogador 02: CARA";
                resultado = lancamentos(2,1);
            } else if(escolha == 2) {
                cout << "\nJogador 01: CARA \nJogador 02: COROA";
                resultado = lancamentos(1,2);
            }
        }
        if(resultado == 1) {
            ++pontuacaoJogador01;
        } else {
            ++pontuacaoJogador02;
        }
        cout << "\n\nPLACAR:\nJOGADOR 01: " <<  pontuacaoJogador01 << "\nJOGADOR 02: " << pontuacaoJogador02 << endl << endl;

    }
    if (pontuacaoJogador01 > pontuacaoJogador02) {
        cout << "\nO jogador 01 venceu";
    } else  if(pontuacaoJogador01 == pontuacaoJogador02){
        cout << "\nO jogo empatou";
    } else {
        cout << "\nO jogador 02 venceu";
    }

}
