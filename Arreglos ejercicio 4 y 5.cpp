#include <iostream>

using namespace std;

int main()
{
    int k, aux, suma;
    float promedio;
    cout<<"Cuantos notas desea ingresar"<<endl;
    cin>>k;
    int notas[k];
    float ponderaciones[k];
    ;
    for(int i=0;i<k;i++){
        cout<<"Ingrese la nota"<<endl;
        cin>>notas[i];
        cout<<"Ingrese las ponderaciones"<<endl;
        cin>>ponderaciones[i];
        suma+=(notas[i])*(ponderaciones[i]);
    }
    promedio=(suma)/k;
    cout<<"El promedio es:"<<promedio<<endl;
    return 0;
}
