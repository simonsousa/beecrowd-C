#include <iostream>

using namespace std;

void inscrever(){//void não retorna nada, e não tem argumentos
	cout << "\nFunção que apenas mostra algo na tela\n";
}
int t;//variavel global; ou seja serve para todas as funçoes;
#define pi 3.14;//variável constante;
#define curtir cout << "\nestude mais\n";//mini função
int somar(int x, int y){
	t = 1;
	int soma;//variavel local; ou seja, so vai valer dentro dessa função
	soma = x + y;
	return soma;
}

int main(){
	int A, B, cont;
	cont = 0;
	while(cont++<20){
	inscrever();
}
	cin >> A >> B;

	cout << "\n" << somar(A,B) << "\n";
	cout << "\n" << "Valor de t: " << t << "\n";
	cout << pi;
	curtir;
	
	return 0;
}
