#include <iostream>
using namespace std;

int main(){
	int a,b, division,residuo;
	
	cout<<"Ingrese dos numeros"<<endl;
	cin>>a;
	cin>>b;
	
	division=a/b;
	residuo=a%b;
	cout<<"El resultado es: "<<division<<endl;
	cout<<"El residuo es: "<<residuo<<endl;	
	return 0;
}
