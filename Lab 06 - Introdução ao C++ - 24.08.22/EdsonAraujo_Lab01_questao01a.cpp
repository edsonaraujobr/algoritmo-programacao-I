#include <iostream>
using namespace std;

/*Quest�o:
Escreva um programa que, dado um n�mero inteiro de 1 a 7, informe o dia da semana
correspondente. Se o dia for de segunda a sexta-feira, escreva tamb�m �dia �til�; caso contr�rio, 
�final de semana�. 
*/

int main ()
{
    setlocale (LC_ALL,"portuguese");
    int dia;

    do {
        cout << "\nDigite um n�mero entre 1 e 7 ";
        cin >> dia;
    } while (dia<=0 || dia>7);

    switch (dia)
    {
    case 1:
        cout << "Domingo" << endl;
        break;
    case 2:
        cout << "Segunda-feira" << endl;
        break;
    case 3:
        cout << "Ter�a-Feira" << endl;
        break;
    case 4:
        cout << "Quarta-Feira" << endl;
        break;
    case 5:
        cout << "Quinta-Feira" << endl;
        break;
    case 6:
        cout << "Sexta-Feira" << endl;
        break;
    case 7:
        cout << "S�bado" << endl;
        break;
    }
    if (dia>=2 && dia<=6)
    {
        cout << "Dia �til" << endl;
    }
    else
    {
        cout << "Final de semana" << endl;
    }
return 0;
}
