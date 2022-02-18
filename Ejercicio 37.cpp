#include <iostream>
using namespace std;

int main ()
{
	double b=7.8;
	int x=1;
   	while (x<=75){
  		b=b+(b*0.0045);
  		cout << b << "\n";
  		x++;
    }
    cout << "\n la poblacion dentro de 75 anios es de: "<< b;
}
