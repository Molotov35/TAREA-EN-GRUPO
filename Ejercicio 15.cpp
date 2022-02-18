#include <iostream>

using namespace std;
int main (){
	int ventas,x=1;	float total;
	while(x<=1){ cout << "introduzca las ventas en dolares (-1 para salir)"; cin >> ventas; 
	if (ventas==-1){ x++;} else{total=(ventas*0.09)+200; cout<<"El salario es: $"<<total<<"\n\n";}	
	}
}

