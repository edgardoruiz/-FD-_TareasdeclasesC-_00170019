#include <iostream>

using namespace std;

int main(void)
{ 
	bool flag=true;
    int A;
    while (A!=0){
    cout<<"Bienvenido a nuestro restaurante"<<endl;
    cout<<"Si desea ordenar desayuno presione 1"<<endl;
    cout<<"Si desea ordenar almuerzo presione 2"<<endl;
    cout<<"Si desea ordenar cena presione 3"<<endl;
    cout<<"Si desea ordenar postre presione 4"<<endl;
    cout<<"Si desea ordenar una bebida presione 5"<<endl;
    cout<<"Ingrese 0 si desea salir"<<endl;
    cin>>A;
    switch(A){
    	case 1:
        
         cout<<"Nuestro menu le ofrece las siguientes opciones en desayunos"<<endl;
         cout<<"Desayuno tipico, Desayuno ejecutivo"<<endl;
         cout<<"El desayuno tipico le ofrece : frijoles, platanos, huevos revueltos, pan"<<endl;
          cout<<"El desayuno ejecutivo le ofrece: Frijoles, platnos, chorizo, huevos revueltos, pan"<<endl;
    break;
    	case 2:
         cout<<"En almuerzos le podemos ofrecer los siguiemtes platillos:"<<endl;
         cout<<"Carne asada, Pechuga de pollo a la plancha, Hamburguesa"<<endl;
    
         cout<<"El platillo de carne asada le ofrece: Filte de res de 8 onzas, arroz, ensalada"<<endl;
         cout<<"El platillo de pollo a la plancha le ofrece: Filete de pollo de 58 onzas, arroz, ensalada"<<endl;
         cout<<"El platillo de hamburguesa le ofrece: hamburguesa de pollo o res, papas fritas"<<endl;
    break;
    case 3:
        cout<<"En cenas le podemos ofrecer las siguientes opciones:"<<endl;
        cout<<"Cena tipica, pupusas"<<endl;
        cout<<"La cena tipica le ofrece: frijoles, platano, huevos revueltos, pan"<<endl;
        cout<<"El plato de pupusas le ofrece: una orden de 3 pupusas"<<endl;
    break;
    case 4:
         cout<<"En bebidas le podemos ofrecer: Gaseosa, cafe, horchata, jugo de naranja"<<endl;
    break;
    case 5:
         cout<<"En postres le podemos ofrecer: Tartaleta de frutas, flan de vainilla, muffin de chocolate "<<endl;
    break;
    default:
        cout<<"Gracias por su visita"<<endl;
        flag=false;
    }
	}
    
    return 0;
}

