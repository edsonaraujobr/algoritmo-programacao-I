#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    setlocale (LC_ALL,"portuguese");

    int cont = 1;
    float vetor [30][12];
    float media [30][4];

    cout << "Digite os preços por produto: " << endl;
    for (int contador = 0; contador < 30; contador++)
    {
        cout << endl << "Produto: " << cont << endl;
        for (int contador2 = 0; contador2 < 12; contador2++)
        {
            cin >> vetor [contador][contador2];
        }
        media [contador][0] = (vetor [contador][0] + vetor [contador][1] + vetor [contador][2])/3;
        media [contador][1] = (vetor [contador][3] + vetor [contador][4] + vetor [contador][5])/3;
        media [contador][2] = (vetor [contador][6] + vetor [contador][7] + vetor [contador][8])/3;
        media [contador][3] = (vetor [contador][9] + vetor [contador][10] + vetor [contador][11])/3;
        ++cont;
    }

    cout << endl << "MÉDIAS TRIMESTRAIS: " << endl;
    cout << endl << "Produto   |   1º trimestre   |   2º trimestre   |   3º trimestre   |   4º trimestre " << endl;
    int contador1 = 1;
    for (int c = 0; c < 30; c++)
    {
        cout << "Produto " << contador1;

        for (int d = 0; d < 4; d++)
        {
            cout << setw (13) << setprecision (4) << media [c][d] << "       ";
        }
        cout << endl;
        ++contador1;
    }
}
