#include <iostream>
using namespace std;
void recursiva (int,int);

/*
 Fa�a uma fun��o recursiva que calcule o m.d.c. pelo algoritmo de Euclides. Por exemplo, divide-se a
por b e obt�m-se o quociente q e o resto r. Se r for zero, b � o m.d.c; se n�o for, divide-se b por r e 
assim sucessivamente at� encontrar um resto zero. O �ltimo divisor � o m.d.c. Teste a fun��o 
chamando-a a partir de main. */

int main ()
{
    setlocale (LC_ALL,"portuguese");
    int a,b;
    cout << "Digite dois n�meros inteiros: " << endl;
    cin >> a >> b;
    cout << "O m.d.c �: ";
    recursiva (a,b);
}

void recursiva (int a,int b)
{
    int r;
    if (a%b==0)
        cout << b;
    else {
        r = a%b;
        return recursiva (b,r);
    }
}
