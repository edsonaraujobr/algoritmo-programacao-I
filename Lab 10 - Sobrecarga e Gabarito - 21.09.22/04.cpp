#include <iostream>
using namespace std;

template <class x>
x consecutivo (x a) {
	a = (int (a) + 1);
	return a;
}

int main() {
    setlocale (LC_ALL,"portuguese");
    int a; char b; char y;

    cout << "Digite um n�mero inteiro: " << endl;
    cin >> a;
    cout << "Digite um caractere: " << endl;
    cin >> b;
    cout << endl;
    cout << "O n�mero " << a << " ap�s a fun��o consecutivo �: " << consecutivo (a) << endl;
    y = consecutivo (b);

    if ((y=='{') || (y=='[')) {
        cout << "O caracter Z n�o tem letra consecutiva. " << endl;
    }
    else {
    	cout << "O caracter " << b << " ap�s a fun��o consecutivo �: " << y << endl;
    }
    return 0;
}
