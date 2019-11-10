#include<iostream>
using namespace std;

int main()
{
	int extNum,numEntero,sumDigit=0;
	cout<<"Ingrese un numero entero";
	cin>>nunEntero;
	 while(numEntero!=0)
	 {
	 	extNum=numEntero%10;
	 	numEntero/=10;
	 	sumaDigit+=extNum;
}
cout<<"La suma de los digitos es:"<<sumDigit<<endl;
return 0;
}