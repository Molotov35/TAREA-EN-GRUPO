#include <iostream>

using namespace std;
int main (){
	int x=1;
	float total,kl,litros;
	while(x<=1){ 
		cout << "Escriba los Kilometros usados (-1 para salir)";
		cin >> kl; 
		if (kl==-1){ 
			x++;
		} 
		else{
			cout << "escriba los litros";
			cin >> litros;
			cout << "KPL en este reabastecimiento: "<< kl/litros;
			cout << "\n \n";
		}

	}
}
