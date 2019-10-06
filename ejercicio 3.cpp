#include<iostream>

using namespace std;
int main(){
	
	float a,b,c,media;
	
	cout<<"ingrese el valor de a: "<<endl;
	cin>>a;
	cout<<"ingrese el valor de b: "<<endl;
	cin>>b;
	cout<<"ingrese el valor de c: "<<endl;
	cin>>c;
	
	media = (a+b+c)/3 ;
	cout.precision(4);
	cout<<"la media aritmetica es: "<<media;
	
	
	return 0;
	
}

