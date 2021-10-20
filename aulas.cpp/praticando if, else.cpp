#include <iostream>
using namespace std;

int main(){
	
	float nota1;
	float nota2;
	
	cout <<"digite a nota1\n";
	cin >> nota1;
	cout <<"digite a nota2\n";
	cin >> nota2;
	// so (1= nao é igual
	// (2=)== :igual
	// ! :nao Exemplo (!= nao é igual)
	float media = (nota1 + nota2)/2;
	cout <<"Media " << media;

   //if - else
	if (media >10){
		cout << " \naluno aprovado";
	}else{
	cout <<" \naluno reprovado";
	}
	
	// if - else if
	if (media <5){
		cout << " \n Sua classe e \n D";
	}
	else if (media <10){
		cout << "\n sua classe \nA";
	}
	else {
	cout << "Parabens voce e o cara";
	}
	
	return 0;
}
