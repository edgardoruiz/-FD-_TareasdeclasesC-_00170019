#include <iostream>

using namespace std;

int main()
{
    int n, aux, suma, promedio;
    cout<<"Cuantos numeros desea ingresar"<<endl;
    cin>>n;
    int numeros[n];
    ;
    for(int i=0;i<n;i++){
        cout<<"Ingrese un numero"<<endl;
        cin>>numeros[i];
        suma+=numeros[i];
    }
    promedio=(suma)/n;
    cout<<"El promedio es:"<<promedio<<endl;
    return 0;
}
