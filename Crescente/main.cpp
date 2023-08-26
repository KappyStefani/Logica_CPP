#include <iostream>
#include <iomanip>
#include <string>
#include <climits>


using namespace std;

int main()
{
    int num1, num2;

    while(num1 != num2)
    {
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    if(num1 == num2)
    {
        exit;
    }

    if (num1 < num2)
    {
        cout << "CRESCENTE" << endl;
    }
    else
    {
        cout << "DESCRESCENTE" << endl;
    }
    }

}


