#include <iostream>

using namespace std;

void inscrever(){//void n�o retorna nada, e n�o tem argumentos
	cout << "\nFun��o que apenas mostra algo na tela\n";
}
int t;//variavel global; ou seja serve para todas as fun�oes;
#define pi 3.14;//vari�vel constante;
#define curtir cout << "\nestude mais\n";//mini fun��o
int somar(int x, int y){
	t = 1;
	int soma;//variavel local; ou seja, so vai valer dentro dessa fun��o
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
