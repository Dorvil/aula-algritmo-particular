#include <iostream>

using namespace std;

int main(){
	

	int num = 0;
	int numcerto = 4;
	while(num != numcerto){
		 cout << "Digite um numero: ";
 cin >> num;
		if(numcerto != num){
	 cout << "Errou! tente novamente";
		}else {
		cout << "Acertou!";
		}
	}
	
	return 0;
}
