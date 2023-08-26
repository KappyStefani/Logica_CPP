#include <iostream>
#include <iomanip>
#include <string>
#include <climits>


using namespace std;

int main()
{
    string nome1, nome2;
    int idade1, idade2;
    double media;

    cout << "Nome da primeira pessoa: ";
    getline(cin, nome1);
    cout << "Idade da primeira pessoa: ";
    cin >> idade1;

    cout << "Nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Idade da segunda pessoa: ";
    cin >>   idade2;

    media = ((double)idade1 + idade2) / 2;

    cout << "A idade media de " << nome1 << " e " << nome2 << "e de: " << media;

}
