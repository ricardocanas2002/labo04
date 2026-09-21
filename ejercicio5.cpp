#include <iostream>
using namespace std;
int main(){
    float monto; //Variable monto
    float descuento1; //Variable descuento 10%
    float descuento2; //Variable descuento 20%
    float total; //Variable total a pagar
    cout<<"Ingrese el monto de su compra: "; //Pide el monto de la compra
    cin>> monto; //Guardar valor en la variable
    if(monto>100 && monto<=200){ //Condicion para aplicar el descuento del 10%
        descuento1 = monto * 0.10;
        total = monto - descuento1;
        cout<<"Se aplica un 10% de descuento. El total es: "<<total;
    }
    else if(monto>200){ //Condicion para aplicar el descuento del 20%
        descuento2 = monto * 0.20;
        total = monto - descuento2;
        cout<<"Se aplica un 20% de descuento. El total es: "<<total;
    }
    else { //Condicion para no aplicar descuento
        cout<<"No se aplica descuento";
    }

return 0;
}