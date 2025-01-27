#include <iostream>

using namespace std;

int main(){
	/*
	int valores[6];
	for(int i = 0; i < 6; i++){
		cin >> valores[i];
	}
	for(int i = 0; i < 6; i++){
		cout << valores[i] << " "; 
	}
	*/
	int matriz[3][2];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cin >> matriz[i][j];
		}
	}
	cout << "A matriz e: " << "\n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}		
		
	return 0;
}
