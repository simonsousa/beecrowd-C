 #include <iostream>
 #include <iomanip>
 using namespace std;//Lanche
 int main(){
 	int codigo, qtd;
	cin >> codigo >> qtd;
 	switch(codigo){
 		case 1:
 			cout << "Total: R$ " << fixed << setprecision(2) << qtd * 4.00 << endl;
 			break;
 		case 2:
 			cout << "Total: R$ " << fixed << setprecision(2) << qtd * 4.50 << endl;
 			break;
 		case 3:
 			cout << "Total: R$ " << fixed << setprecision(2) << qtd * 5.00 << endl;
 			break;
		case 4:
 			cout << "Total: R$ " << fixed << setprecision(2) << qtd * 2.00 << endl;
 			break;
		case 5:
 			cout << "Total: R$ " << fixed << setprecision(2) << qtd * 1.50 << endl;
 			break;
 		}
	return 0;	 	 	 		
 }
