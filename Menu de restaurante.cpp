#include <iostream>

using namespace std;

int main(void)
{ 
    bool flag=true;
    int comida, menu,opcion, bebida;
    cout<<"¡ Bienvenido a nuestro restaurante !"<<endl;
    while(flag){
    cout<<"Presione 1 si desea entrar al menu o presione 0 si desea salir"<<endl;
    cin>>menu;
        if(menu!=0){
            cout<<"Si desea ordenar desayuno presione 1"<<endl;
            cout<<"Si desea ordenar almuerzo presione 2"<<endl;
            cout<<"Si desea ordenar cena presione 3"<<endl;
            cout<<"Si desea ordenar postre presione 4"<<endl;
            cout<<"Si desea ordenar una bebida presione 5"<<endl;
            cin>>comida;
            
            if(comida==1){
                 cout<<"Nuestro menu le ofrece las siguientes opciones en desayunos"<<endl;
                 cout<<"Ingrese 1 si desea ordenar el desayuno tipico"<<endl;
                 cout<<"Ingrese 2 si desea ordenar el desayuno ejecutivo"<<endl;
                 cout<<"Ingrese 3 si desea salir"<<endl;
                 cin>>opcion;
                 if(opcion==1){
                 cout<<"El desayuno tipico le ofrece : frijoles, platanos, huevos revueltos, pan"<<endl;
                 cout<<"Costo"<<" $2.00 "<<endl;
                 }
                 else if(opcion==2){
                  cout<<"El desayuno ejecutivo le ofrece: Frijoles, platanos, chorizo, huevos revueltos, pan"<<endl;
                  cout<<"Costo"<<" $3.25"<<endl;
                 }
                  else{
                     cout<<"salir"<<endl;
                    }
            }
            else if(comida==2)
            {
                 cout<<"En almuerzos le podemos ofrecer los siguiemtes platillos:"<<endl;
                 cout<<"Ingrese 1 si desea ordenar el platillo de carne de asada "<<endl;
                 cout<<"Ingrese 2 si desea ordenar el platillo de pollo de pollo"<<endl;
                 cout<<"Ingrese 3 si desea ordenar el platillo de hamburguesa"<<endl;
                 cout<<"Ingrese 4 si desea salir"<<endl;
                 cin>>opcion;
                 if(opcion==1){
                 cout<<"El platillo de carne asada le ofrece: Filte de res de 8 onzas, arroz, ensalada"<<endl;
                 cout<<"Costo"<<" $3.00"<<endl;
                 }
                 else if(opcion==2){
                  cout<<"El platillo de pollo a la plancha le ofrece: Filete de pollo de 58 onzas, arroz, ensalada"<<endl;
                  cout<<"Costo"<<" $2.25"<<endl;
                 }
                  else if (opcion==3){
                     cout<<"El platillo de hamburguesa le ofrece: hamburguesa de pollo o res, papas fritas"<<endl;
                     cout<<"Costo"<<" $2.10"<<endl;
                    }
                    else{ 
                        cout<<"Salir"<<endl;
                    }
            }
            else if(comida==3){
                cout<<"En cenas le podemos ofrecer las siguientes opciones:"<<endl;
                cout<<"Ingrese 1 si desea ordenar el platillo de pupusas"<<endl;
                cout<<"Ingrese 2 si desea ordenar la cena tipica "<<endl;
                cout<<"Ingrese 3 si desea salir"<<endl;
                cin>>opcion;
                if(opcion==1){
                cout<<"El plato de pupusas le ofrece: una orden de 3 pupusas"<<endl;
                cout<<"Costo"<<" $1.50"<<endl;
                }
                else if(opcion==2){
                cout<<"La cena tipica le ofrece: frijoles, platano, huevos revueltos, pan"<<endl;
                cout<<"Costo"<<" $2.75"<<endl;
                }
                else{
                    cout<<"Salir"<<endl;
                }
            }
            else if(comida==4){
                 cout<<"En bebidas le podemos ofrecer:"<<endl; 
                 cout<<"Ingrese 1 si desea ordenar gaseosa"<<endl;
                 cout<<"Ingrese 2 si desea ordenar cafe"<<endl;
                 cout<<"Ingrese 3 si desea ordenar horchata"<<endl;
                 cout<<"Ingrese 4 si desea ordenar jugo de naranja"<<endl;
                 cout<<"Ingrese 5 si desea salir"<<endl;
                 cin>>bebida;
                 if(bebida==1){
                 cout<<"Gaseosa"<<endl;
                 cout<<"Entre las opciones de bebidas le podemos ofrecer:"<<endl;
                 cout<<"Coca Cola"<<endl;
                 cout<<"Sprite"<<endl;
                 cout<<"Crema soda"<<endl;
                 } 
                 else if(bebida==2){
                     cout<<"cafe"<<endl;
                     }
                else if(bebida==3){                     
                cout<<"chocolate"<<endl;
                }
                else if (bebida==3){
                    cout<<"horchata"<<endl;
                    }
                    else if (bebida==4){
                        cout<<"jugo de naranja"<<endl;
                    }
                    else {
                        cout<<"salir"<<endl;
                    }
            }
            else if (comida==5){
                 cout<<"En postres le podemos ofrecer:"<<endl;
                 cout<<"Ingresee 1 si ordenar la opcion 1"<<endl;
                 cout<<"Ingrese 2 si desea ordenar la opcion 2"<<endl;
                 cout<<"Ingrese 3 si desea ordenar la opcion 3"<<endl;
                 cout<<"Ingrese 4 si desea salir"<<endl;
                 cin>>opcion;
                 if(opcion==1){
                 cout<<"Tartaleta de frutas"<<endl;
                 }
                 else if (opcion==2){
                 cout<<"flan de vainilla"<<endl;
                 }
                 else if(opcion==3){
                     cout<<"muffin de chocolate "<<endl;
                 }
                 else{
                     cout<<"salir"<<endl;
                 }
            }
        }
            else{
                cout<<"¡Gracias por su visita, lo esperamos pronto!"<<endl;
                flag=false;
            }
        
    }
            return 0;
        }
