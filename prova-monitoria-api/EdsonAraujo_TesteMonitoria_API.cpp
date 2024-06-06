#include <iostream>
using namespace std;
void bubbleSort(int[], int);
int buscaBinaria(int[], int , int );

int main() {
    setlocale(LC_ALL,"portuguese");

    int getTamanho;
    cout << "Digite o tamanho do seu array: ";
    cin >> getTamanho;
    const int tamanho = getTamanho;
    int array[tamanho];

    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o valor do elemento " << i+1 << " : ";
        cin >> array[i];
    }

    bubbleSort(array, tamanho);
    cout << "\nO array ap�s a fun��o bubble sort �: " << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int valor, resultado;
    cout << "Digite um valor para fazer a busca binaria no array: ";
    cin >> valor;

    resultado = buscaBinaria(array,tamanho,valor);
    if(resultado != -1 ) {
        cout << "Valor encontrado, posi��o: " << resultado+1 << endl;
    } else {
        cout << "Valor n�o encontrado.\n";
    }

    return 0;


}

/* A fun��o bubble sort � uma fun��o sem retorno que recebe como par�metro um array de inteiro e seu tamanho.
E tem como objetivo ordenar os vetores em ordem crescente, neste caso espec�fico.

Atrav�s do primeiro for garantimos que vamos verificar a posi��o de todos os elementos.

O segundo for, garantimos que a cada intera��o o maior elemento esteja na ultima posi��o e nas pr�ximas vezes
evitamos comparar, atrav�s da express�o "tamanho - i - 1 ", economizando tempo visto que, estes valores j� s�o maiores
que qualquer outro.

No if verificamos se o atual valor � maior que o pr�ximo, se sim criamos uma vari�vel auxiliar que recebe e guarda
o atual valor. O atual valor recebe o pr�ximo valor do array, e o pr�ximo valor do array recebe o valor guardando
na vari�vel auxiliar.
*/
void bubbleSort(int array[], int tamanho){
    for (int i = 0; i < tamanho - 1 ; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (array[j] > array[j+1]) {
                int auxiliar = array[j];
                array[j] = array[j+1];
                array[j+1] = auxiliar;
            }
        }
    }
}

/* A fun��o busca bin�ria � uma fun��o que recebe como par�metro um array ordenado, o tamanho do array e a chave.
Tem como objetivo fazer uma busca e verificar se aquela chave est� presente no array e retornar sua posi��o. Retorna
-1 caso n�o encontre.

Temos duas vari�veis iniciais, inicio e fim que talvez mudem seus valores daqui para frente.
No while vamos executar at� o inicio ser maior que o fim, Se a execu��o do while encerrar significa
que o valor n�o foi encontrado e damos um return no -1.

A variavel metade recebe inicialmente o tamanho do array dividido pela metade, por�m seu valor pode mudar e vai caso
a chave n�o esteja na posi��o metade do array logo de cara.

Se a chave n�o estiver na posi��o metade do array, verificamos se a chave � maior ou menor que o valor na posi��o metade do array.

Se a chave for maior, inicio se torna metade+1, descartando toda a outra metade que n�o interessa.
Se a chave for menor, fim se torna metade-1, descartando toda a outra metade que n�o interessa.
E assim, retornamos para o inicio do while at� encontrar a chave, ou n�o.
*/
int buscaBinaria(int array[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho-1;

    while (inicio <= fim) {
        int metade = (inicio+fim)/2;
        if(array[metade] == chave) {
            return metade;
        } else {
            if (array[metade] < chave) {
                inicio = metade+1;
            } else {
                fim = metade-1;
            }
        }
    }
    return -1;
}
