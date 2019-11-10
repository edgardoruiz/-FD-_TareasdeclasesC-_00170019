#include <iostream>

using namespace std;

int main()
{
    int m, n;
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
           cout<<matriz[i][j]<<"|";
       }
        cout<<endl;
   }
 
    return 0;
}

