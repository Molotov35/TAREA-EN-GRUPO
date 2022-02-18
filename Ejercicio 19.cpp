#include <iostream>

using namespace std;
int main (){
	int cont=1,may,may2,num;
	while (cont<=10){
		cout << "ingrese un numero \n";
		cin >> num;
		if (num>may){
			if (num>may2){
				may=may2;
				may2=num;
			}
			else {
				may=num;
			}	
		}
		cont++;
	}
	cout<<"\n el mayor es:  "<<may2;
	cout<<"\n el que le sigue es:  "<<may;
}
