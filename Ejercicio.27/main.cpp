#include <iostream>

using namespace std;

int main()
{
    int binario, resultado, resto = 0;
    int digito[8];

    cout << "Introduce el numero en binario: " << endl;
    cin >> binario;

    for (int i = 0; i < 8; i++)
    {
        digito[i] = binario % 10;
        binario /= 10;
    }

    for (int i = 7; i >= 0; i--)
    {
        resultado = (resto * 2) + digito[i];
        resto = resultado;
    }

    cout << endl << "El numero equivalente en decimal es: " << resultado << endl;
}
