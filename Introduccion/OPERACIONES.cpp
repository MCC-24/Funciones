//CANO CARRASCO MONSERRAT
//                                    Programa que hace suma de funciones

#include <iostream>

using namespace std;

void suma (int a, int b);

int main (){
int a,b;
cout <<"escriba un numero para sumar : " <<endl;
cin >> a;
cout <<"escriba otro numero para sumar : " <<endl;
cin >> b;
suma (a,b);
return 0;

}

void suma (int a, int b) {
int c= a + b;
cout <<"El resultado de su suma es : " <<c<<endl;
}
