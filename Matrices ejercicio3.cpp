#include <iostream>

using namespace std;

int main()
{
    int m, n, k=5, aux;
    cout<<"Ingrese el numero de filas"<<endl;
    cin>>m;
    cout<<"Ingrese el numero de columnas"<<endl;
    cin>>n;
   int matriz[m][n];
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
        cout<<"Ingrese un numero"<<endl;
        cin>>matriz[i][j];
        
       }
   }
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           aux=matriz[i][j]*k;
           cout<<"|"<<aux;
       }
        cout<<endl;
   }
    return 0;
}

