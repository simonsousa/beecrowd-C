#include <iostream>

using namespace std;

int main(){
		
		int n1,n2,res;
		char opc;
		
		inicio: // label (:) 
		
		system("cls");
				
		cout << "Digite o valor da nota 1: ";
		cin >> n1;
		cout << "Digite o valor da nota 2: ";
		cin >> n2;
		
		res = n1 + n2;
		/*
			>= 60 		Aprovado
			>=40 e <60	Recuperacao
			<40			Reprovado
		*/
		
		if(res >= 60){
			cout << "\nAluno Aprovado\n";
		}else if(res >= 40){
			cout << "\nAluno de Recuperacao\n";
		}else{
			cout << "\nAluno Reprovado\n";
		}
		
		
		cout << "\n\nDigitar outra notas?[s/n]: ";
		cin >> opc;
		
		if(opc == 's' or opc == 'S'){
			goto inicio;
		}
		
		return 0;		
		
}

