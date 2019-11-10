#include<iostream>
using namespace std;

int main()
{
	int matriz[4][4], k=3;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			matriz[i][j]=(i*j);
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matriz[i][j]<<"|";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<4;++i){
	    matriz[i][i]=i*i;
	}
	cout<<"La diagonal principal de la matriz es:"<<endl;
	for(int i=0;i<4;++i){
	    cout<<matriz[i][i]<<"|";
	}
	cout<<endl;
	cout<<"La matriz secundaria de la matriz es:"<<endl;
	for(int i= 4-1, j=0;i>=1 && j <4; --i, ++j){
	    cout<<matriz[i][j]<<"|";
	}
	cout<<endl;
	for(int i = 0;i<4;i++){
	    for(int j=1;j<4;j++){
	    matriz[j][i]=j*i;
	    }
	}
	cout<<"La matriz tringular superior es:"<<endl;
	for(int i=0;i<4-1;i++){
	    for(int j=4-1;j>0+i;j--){
	    cout<<matriz[j][i]<<"|";
	}
	cout<<endl;
	}
	cout<<"La matriz triangula inferior es:"<<endl;
	 for(int i=0;i<4;i++){
	   for(int j=i+1;j<4;j++){
	        cout<<matriz[i][j]<<"|";
	    }
	    cout<<endl;
	}
	return 0;
}
