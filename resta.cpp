#include<iostream>
using namespace std;


int main(){
	int resta=0, n, a;
	cout<<"Ingrese la cantidad de numeros que desea operar"<<endl;
	cin>>n;
	for(int i=0; i<n; i++){
	cout<<"Ingrese un numero"<<endl;
	cin>>a;
	resta-=a;
	}
	cout<<"El resultado es :"<<resta<<endl;
	
	
	
	return 0;
}
	
