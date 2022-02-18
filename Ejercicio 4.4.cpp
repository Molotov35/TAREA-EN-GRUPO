#include <iostream>

using namespace std;

int main()
{
    int Suma=0, x1, x2, X=1, res;
    int op;
        printf("-----[1]Suma-----------\n");
        printf("-----[2]X----\n");
        printf("-----[3]Resultado de Suma---\n");

        printf("Que Operacion Realizara?\n");
        scanf("%d", &op);

        switch(op)
            {
                case 1:
                    cout << "Nota de Materia1" << endl;
                    cin >> Suma;
                    printf("Ingrese el Primer Numero: ");
                    scanf("%d", &x1);
                    printf("\nIngrese el Segundo Numero: ");
                    scanf("%d", &x2);
                    Suma = x1+x2;
                    printf("\nResultado = %d", Suma);
                    break;
                case 2:
                    cout << "Nota de Materia1" << endl;
                    cin >> Suma;
                    printf("Ingrese el Primer Numero: ");
                    scanf("%d", &X);
                    printf("\nIngrese el Segundo Numero: ");
                    scanf("%d", &Suma);
                    Suma = X+Suma;
                    printf("\nResultado = %d", Suma);
                    break;
                case 3:
                     Suma = X+Suma;
                    printf("Suma es Igual a: ", Suma);

            }
}
