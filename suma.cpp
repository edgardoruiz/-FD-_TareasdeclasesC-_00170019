#include<iostream>
using namespace std;
int main(){
	int a,n, suma=0;
	cout<<"Ingrese la cantidad de numeros que desea operar"<<endl;
	cin>>n;
	for(int i=0; i<n; i++){
	cout<<"Ingrese un numero"<<endl;
	cin>>a;
	suma+=a;
	}
	cout<<"El resultado es :"<<suma<<endl;
	
	
	
	return 0;
}
