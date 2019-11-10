#include<iostream>

#include<string>

using namespace std;

	string funcionNombres(string nombre){
    cout<<"Escriba su nombre:"<<endl;

    	cin>>nombre;

    	return nombre;

	}



	float funcionSalario(float salarioResultante, float isss,float afp){
    
		cout<<"Ingrese su salario"<<endl;

    	cin>>salarioResultante;
    
		afp=(salarioResultante*0.03);
 
		isss=(salarioResultante*0.0725);

	        salarioResultante=salarioResultante-isss-afp;

	return salarioResultante;
	    
}

	int main(){
    
	string nombre, apellidos;

    	cout<<""<<funcionNombres(nombre)<<endl;

    	cout<<"Su salario despues de aplicar isss y afp es:"<<endl<<funcionSalario(500, 0.30, 0.0725)<<endl;

    	return 0;

	}