#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;
int main()
{
    double base, altura, area, perimetro, diagonal;

    area = 0;
    base = 0;
    area = 0;
    perimetro = 0;
    diagonal = 0;

    cout << "Base do retângulo: ";
    cin >> base;
    cout << "Altura do retângulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt((base * base) + (altura * altura));

    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;
    cout << "Diagonal: " <<diagonal << endl;






}

