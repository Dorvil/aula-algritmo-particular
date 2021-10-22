#include<iostream>
using namespace std;
int main() {
	
	int numero = 10;
	int numeroLido = 10;

while (numeroLido != numero){
	cout << "\nAdivinha qual numero: ";
	cin >> numeroLido;
	if (numeroLido > numero ){
		cout << numeroLido << " \ne maior que " << numero;
	}else if (numeroLido == numero){
		cout << numeroLido << "\ne igual " << numero;
	}else{
		cout << numeroLido << " \ne menor que " << numero;
	}
	
	
}	

	return 0;
}

