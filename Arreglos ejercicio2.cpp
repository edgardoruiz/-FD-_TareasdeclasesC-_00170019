#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Cuantos numeros desea ingresar"<<endl;
    cin>>n;
    int numeros[n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese un numero"<<endl;
        cin>>numeros[i];
    }
    for(int i=0;i<n;i++){
    cout<<"|"<<numeros[i];
    }
    return 0;
}
