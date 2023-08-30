#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{

    int i, n, cont;
    double media, soma, percentual;


    cout << "Quantas pessoas voce vai digitar?";
    cin >> n;

    string nomes[n];
    double altura[n];
    int idade[n];

    for(i = 0; i < n; i++)
    {
        cout << "Dados da " << i+1 << " Pessoa" << endl;
        cout << "Nome: ";
        getline(cin, nomes[i]);
        cin.ignore(INT_MAX, '\n');
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
    }

    soma = 0;

    for(int i = 0; i < n ; i++)
    {
        soma = soma + altura[i];
    }

    media = soma / n;
    cout << fixed << setprecision(2);
    cout << "Altura media: " << media << endl;

    cont = 0;
    for (int i = 0; i <= n; i++)
    {
        if(idade[i] < 16)
        {
            cont++;
        }
    }

    percentual = (double)cont * 100 / n;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << percentual << "%";

    for (int i = 0; i < n; i++)
    {
        if(idade[i] < 16)
        {
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
