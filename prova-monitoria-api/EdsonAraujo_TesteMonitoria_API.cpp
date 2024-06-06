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
    cout << "\nO array após a função bubble sort é: " << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int valor, resultado;
    cout << "Digite um valor para fazer a busca binaria no array: ";
    cin >> valor;

    resultado = buscaBinaria(array,tamanho,valor);
    if(resultado != -1 ) {
        cout << "Valor encontrado, posição: " << resultado+1 << endl;
    } else {
        cout << "Valor não encontrado.\n";
    }

    return 0;


}

/* A função bubble sort é uma função sem retorno que recebe como parâmetro um array de inteiro e seu tamanho.
E tem como objetivo ordenar os vetores em ordem crescente, neste caso específico.

Através do primeiro for garantimos que vamos verificar a posição de todos os elementos.

O segundo for, garantimos que a cada interação o maior elemento esteja na ultima posição e nas próximas vezes
evitamos comparar, através da expressão "tamanho - i - 1 ", economizando tempo visto que, estes valores já são maiores
que qualquer outro.

No if verificamos se o atual valor é maior que o próximo, se sim criamos uma variável auxiliar que recebe e guarda
o atual valor. O atual valor recebe o próximo valor do array, e o próximo valor do array recebe o valor guardando
na variável auxiliar.
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

/* A função busca binária é uma função que recebe como parâmetro um array ordenado, o tamanho do array e a chave.
Tem como objetivo fazer uma busca e verificar se aquela chave está presente no array e retornar sua posição. Retorna
-1 caso não encontre.

Temos duas variáveis iniciais, inicio e fim que talvez mudem seus valores daqui para frente.
No while vamos executar até o inicio ser maior que o fim, Se a execução do while encerrar significa
que o valor não foi encontrado e damos um return no -1.

A variavel metade recebe inicialmente o tamanho do array dividido pela metade, porém seu valor pode mudar e vai caso
a chave não esteja na posição metade do array logo de cara.

Se a chave não estiver na posição metade do array, verificamos se a chave é maior ou menor que o valor na posição metade do array.

Se a chave for maior, inicio se torna metade+1, descartando toda a outra metade que não interessa.
Se a chave for menor, fim se torna metade-1, descartando toda a outra metade que não interessa.
E assim, retornamos para o inicio do while até encontrar a chave, ou não.
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
