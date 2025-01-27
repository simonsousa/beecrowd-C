#include <iostream>

using namespace std;

int main(){
	int N, X, Y, min, max, soma;
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> X >> Y;
			if(X < Y){
				min = X;
				max = Y;
			}else{
				min = Y;
				max = X;
			}
			soma = 0;
			for(int j = min+1; j < max; j++){
				if(j % 2 != 0){
					soma = soma + j;
				}
			}	
	cout << soma << "\n";
	}

	
	return 0;
	
}
