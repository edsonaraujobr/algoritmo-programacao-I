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

    cout << "Digite um número inteiro: " << endl;
    cin >> a;
    cout << "Digite um caractere: " << endl;
    cin >> b;
    cout << endl;
    cout << "O número " << a << " após a função consecutivo é: " << consecutivo (a) << endl;
    y = consecutivo (b);

    if ((y=='{') || (y=='[')) {
        cout << "O caracter Z não tem letra consecutiva. " << endl;
    }
    else {
    	cout << "O caracter " << b << " após a função consecutivo é: " << y << endl;
    }
    return 0;
}
