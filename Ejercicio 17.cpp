#include <iostream>

using namespace std;
int main (){
	int cont=1,may,num;
	while (cont<=10){
		cout << "ingrese un numero \n";
		cin >> num;
		if (num>may){
			may=num;	
		}
		cont++;
	}
	cout<<"\n el mayor es:  "<<may;
}
