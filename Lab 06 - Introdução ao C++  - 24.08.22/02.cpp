#include iostream
using namespace std;

int main ()
{
    setlocale (LC_ALL,portuguese);
    int n;
    cout  Digite um número maior que 0 e menor que 100 ;
    cin  n;
    while (n=0  n=100)
    {
        cout  nERRO!n;
        cout  Digite um número maior que 0 e menor que 100 ;
        cin  n;
    }
    cout  Os impares maiores que   n   são  endl;
    for (n;n100;n++)
    {
        static int y=1;
        if (n%2==0)
        {
            n += 1;
            if (y==1) {
            cout  n;
            }
            else {
            cout  ,   n ;
            }
        }
        else
        {
            n += 2;
            if (y==1) {
            cout  n;
            }
            else {
            cout  ,   n ;
            }
        }
        ++y;
    }
return 0;
}
