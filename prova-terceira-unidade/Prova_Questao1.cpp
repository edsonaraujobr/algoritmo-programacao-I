#include <iostream>
#include <iomanip>
using namespace std;

void ordenacao (int [],int);
float mediaaritmetica (int [],int);
float mediana (int [],int);
void imprimevetor (int [],int);
int cadastrar (int[],int);

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int a,cont = 0;
    int vetor [5000];

    cont = cadastrar(vetor,cont);

    if (cont != 0)
    {
        cout << endl << "Idades = {";
        imprimevetor(vetor,cont);
        cout << "}";
        ordenacao (vetor,cont);
        cout << endl << endl << "Vetor ordenado: " << endl;
        cout << "Idades = {";
        imprimevetor(vetor,cont);
        cout << "}";
        cout << endl << endl << setprecision (4) << "media = " << mediaaritmetica (vetor,cont);
        cout << endl << "mediana = " << mediana (vetor,cont) << endl;
    }
    return 0;
}

int cadastrar(int vetor [], int tam) {
    cout << "Digite a idade do aluno: (Digite 0 caso nao ha mais aluno.)" << endl;
    cin >> vetor[tam];
    while (vetor[tam] != 0 ) {
        ++tam;
        cin >> vetor [tam];
    }
    return tam;
}

void ordenacao (int vetor [],int tam)
{
    int auxiliar;
    for (int c = 0; c < tam; c++)
    {
        for (int d = 0; d < tam; d++)
        {
            if (vetor[d]>vetor[d+1] && vetor[d+1] != 0)
            {
                auxiliar = vetor[d];
                vetor[d] = vetor [d+1];
                vetor [d+1] = auxiliar;
            }
        }
    }
}

float mediaaritmetica (int vetor [],int tam)
{
    float soma = 0;
    for (int c = 0; c < tam; c++)
    {
        soma += vetor [c];
    }
    return soma/float(tam);
}

float mediana (int vetor [],int tam)
{
    int meio; float soma = 0;
    if (tam % 2 == 0)
    {
        meio = tam/2;
        soma += vetor[meio-1];
        soma += vetor[meio];
        return soma/2;
    }
    else
        return vetor [tam/2];
}

void imprimevetor (int vetor[],int tam)
{
    for (int c = 0; c < tam; c++)
    {
        cout << vetor[c];
        if (c!=tam-1)
            cout << ",";
    }
}
