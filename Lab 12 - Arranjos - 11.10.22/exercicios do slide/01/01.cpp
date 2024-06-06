#include <iostream>
using namespace std;

int main ()
{
    setlocale (LC_ALL,"portuguese");
    const int alunos = 5;
    int nota [alunos];
    int totaldenotas = 0; float media; int mm=0;
    
    cout << "Digite sua nota: 1 até 10 " << endl;
    for (int contador = 0; contador < alunos; contador++) {
        cin >> nota [contador];
        totaldenotas += nota[contador];
    }
    media = totaldenotas / alunos;;
    for (int cont = 0; cont < alunos; cont++)
        if (nota[cont]>media)
            ++mm;
            
    cout << "A média das notas foi de: " << media << endl;
    cout << "A quantidade de notas acima de média foi de: " << mm << endl;
}
