//CANO CARRASCO MONSERRAT
//                                    Programa que calcula el Area de Figuras


#include <iostream>

#include <cmath>

using namespace std;


void areaDelCuadrado(void);

void areaDelRectangulo(void);

void mostrarArea(float area);

int main(){
 char opcion;
 cout<<"Selecciona el area que deseas calcular"<<endl;
 cout<<"  A) Cuadrado\n B) Rectangulo\n"; cin>>opcion;
 switch(opcion){

  case 'A': areaDelCuadrado(); break;
  case 'B': areaDelRectangulo(); break;

 }
 return 0;
}

void mostrarArea(float area){   cout<<"El area es: "<<area<<endl; return;  }

void areaDelCuadrado(void){
 float lado, area = 0;
 cout<<"Ingresa un lado: "; cin>>lado;
 area = pow(lado,2);
 mostrarArea(area);
 return;
}

void areaDelRectangulo(void){
 float base, altura, area = 0;
 cout<<"Ingresa la base: "; cin>>base;
 cout<<"Ingresa la altura: "; cin>>altura;
 area = base * altura;
 mostrarArea(area);
 return;
}

