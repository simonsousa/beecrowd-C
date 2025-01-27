#include <iostream>

using namespace std;//Par ou Ímpar

int main(){
	int l, x, vetor[5];
	for(l = 0;l < sizeof(vetor)/4; l++){
		cin >> vetor[l];
	}
	int N = vetor[0];
	//evenPositive, evenNegative, oddPositive, oddNegative, null:
	for(x = 1; x <= N; x++){
		if(vetor[x] % 2 == 0 && vetor[x] > 0){
			cout << "EVEN POSITIVE" << "\n";				
		}else if(vetor[x] % 2 == 0 && vetor[x] < 0){
			cout << "EVEN NEGATIVE" << "\n";
		}else if(vetor[x] == 0){
			cout << "NULL" << "\n";
		}else if(vetor[x] % 2 != 0 && vetor[x] > 0){
			cout << "ODD POSITIVE" << "\n";
		}else if(vetor[x] % 2 != 0 && vetor[x] < 0){
			cout << "ODD NEGATIVE" << "\n";
		}
	}
	return 0;
}
