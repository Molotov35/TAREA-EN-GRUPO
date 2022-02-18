#include <iostream>
using namespace std;

int main(){
int c3;
int c2;
int c;
int h;
cout << "Insertar medida de lado:";
cin >> h;
cout << endl;
int spaces = h-3;

for(c=0;c<=h-1;c++){
cout << "*";
}
cout << endl;

for(c3=0;c3<=spaces;c3++){
for(c=0;c<=1;c++){
cout << "*";
for(c2=0;c2<=spaces;c2++){
cout << " ";}
}cout<<endl;}
for(c=0;c<=h-1;c++){
cout << "*";
}
cout << endl << endl;
system("PAUSE");
}
