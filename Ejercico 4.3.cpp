#include <iostream>

using namespace std;

int main()
{

    int x, y, z, Cuenta;
    int op;
        printf("Que Operacion Realizara?\n");
        scanf("%d", &op);
        switch(op)
            {
            case 1:
                printf("Ingrese el Valor de X: ");
                scanf("%d", &x);
                x++;
                printf("\nIngrese el Valor de y: ");
                scanf("%d", &y);
                z = x+y;
                printf("\nResultado = %d", z);
                return 0;
            case 2:
                cout << "Nota de Materia1" << endl;
                cin >> Cuenta;
                if (Cuenta>10)
                cout << "Su cuenta es mayor que diez" << endl;
                else cout << "SU cuenta no es mayor que diez" << endl;
                cout << "Segunda Materia: " << endl;
                return 0;
            case 3:
                 printf("Ingrese el Primer Numero: ");
                scanf("%d", &x);
                printf("\nIngrese el Segundo Numero: ");
                scanf("%d", &y);
                    x+1;
                z = x+y;
                z = z-x;
                printf("\nResultado = %d", res);
            case 4:
                 printf("Ingrese el Primer Numero: ");
                scanf("%d", &x);
                printf("\nIngrese el Segundo Numero: ");
                scanf("%d", &y);
                res = x1/x2;
                printf("\nResultado = %d", res);
            }
            printf("\n\n");
            system("pause");

}

int main2()
{

}

