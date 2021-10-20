#include <iostream>

using namespace std;

    void mensagem(){
	cout << "Ola eu sou assistencia Ana\n";
    }

int num1;
int num2;
int soma = num1 + num2;
	int main (){
		soma;
		mensagem();
		string nome;
		float altura;
		cout << "Bom dia qual e seu nome \n";
		cin >> nome;
		cout << "Bem vindo " << nome;
		cout <<"\nQual e sua altura " << nome <<"?\n";
		cin >> altura;
		cout <<"Entao " << nome << " voce tem " << altura <<"cm de altura \n";
		cout << nome << " bora fazer uma calcula?\n";
		cout <<"digite um numero\n";
		cin >> num1;
		cout << "digite um segundo numero\n";
		cin >> num2;
		cout << "entao " << nome << "A soma dos dois nume e: " num1 + num2;
		
		return 0;
		}

