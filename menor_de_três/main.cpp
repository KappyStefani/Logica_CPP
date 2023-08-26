#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int menor;

    cout << "Digite o primeiro valor: ";
    cin >> a;
    cout << "Digite o segundo valor: ";
    cin >> b;
    cout << "Digite o terceiro valor: ";
    cin >> c;

    if(a < b && a < c)
    {
        menor = a;
    }
    else if(b < a && b < c)
    {
        menor = b;
    }
    else
    {
        menor = c;
    }

    cout << "O menor valor e "<< menor;

}
