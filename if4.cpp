#include<iostream>
using namespace std;
main(){
	//and (y) &&
	//or(o) ||
	
	char lapiz,lapicero,cuaderno;
	cout<<"Trae lapiz (s/n):";
	cin>>lapiz;
	cout<<"Trae lapicero (s/n):";
	cin>>lapicero;
	cout<<"Trae cuaderno (s/n):";
	cin>>cuaderno;
	//puede entrar  a mi clase si usted trae un lapiz y un lapicero
	// and (y) && = el valor es verdadero si ambas son verdaderas
	//puede entrar a mi clase  si usted trae un lapiz o un lapicero
	//or(o)= el valor es verdadero si por lo menos una sea verdadera
	
	//puede entrar  a mi clase si usted trae un lapiz o un lapicero
	if((lapiz=='s' || lapicero=='s')&& cuaderno=='s'){
		cout<<"Ingresa"<<endl;
	}else{
		cout<<"Lo siento, no puede ingresar"<<endl;
	}

}
