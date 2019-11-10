#include <iostream>

using namespace std;

int main(void)
{ 
    string usuario;
    int opcion;
   cout<<"Bienvenido a Facebook"<<endl;
   cout<<"Ingresa tu usuario"<<endl;
   cin>>opcion;
   
   
   switch (opcion){
       case 1:
       cout<<"Error de credenciales"<<endl;
       break;
       case 2:
       cout<<"Error de credenciales"<<endl;
       break;
       case 3:
       cout<<"Error de credenciales"<<endl;
       break;
       case 4:
       cout<<"Su conexion no es adecuada"<<endl;
       break;
       case 5:
       cout<<"Su cuenta no existe"<<endl;
       break;
       default:
       cout<<"Salir"<<endl;
   }
    return 0;
}
