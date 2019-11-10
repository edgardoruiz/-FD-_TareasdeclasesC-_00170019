#include <iostream>

using namespace std;

int main()
{
    int k, aux, suma, m,n;
    float promedio;
    cout<<"Ingrese el numero de filas"<<endl;
    cin>>m;
    cout<<"Ingrese el numero de columnas"<<endl; 
    cin>>n;
    aux=m*n;
    int matriz[m][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            cout<<"Ingrese la nota"<<endl;
            cin>>matriz[i][j];
            }
        }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            suma+=matriz[i][j];
        }
    }
    cout<<"El resultado es: "<<suma<<endl;
    promedio=suma/aux;
    cout<<"La nota final de los estudiantes es :"<<promedio<<endl;
     
    return 0;
}
