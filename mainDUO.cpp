#include <bits/stdc++.h>
#include "Duo.h"
using namespace std;
///codigo por Colque C
int main()
{ int menor, mayor;
    cout<<"Ingrese el valor menor: ";
    cin>>menor;
    cout<<"Ingrese el valor mayor: ";
    cin>>mayor;
    Duo *obj = new Duo(menor,mayor);
      cout<<"\n"<<"Distancia es: "<<endl;
      obj->hallarDistancia();
      cout<<"\n"<<"Hipotenusa es: "<<endl;
      obj->hallarHipotenusa();
      cout<<"\n"<<"Rango es: "<<endl;
      obj->imprimirRango();
      cout<<"\n"<<"Impares es: "<<endl;
      obj->mostrarImpares();
      cout<<"\n"<<"Pares es: "<<endl;
      obj->mostrarPares();
      cout<<"\n"<<"Los numeros primos es: "<<endl;
      obj->primosRango();
return 0;
}

