#include <iostream>
using namespace std;
int main(){
    float temp;
    cout<<"Ingrese la temperatura en grado: "; //Pide la temperatura en grados
    cin>> temp; //Guardar valor en la variable
    if(temp<10){
        cout<<"la temperatura es fria";
    }
    else if(temp>=10 && temp<=25){
        cout<<"La temperatura es templada";
    }
    else if(temp>25){
        cout<<"La temperatura es calurosa";
    }

return 0;
}