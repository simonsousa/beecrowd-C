#include <iostream>
using namespace std;//Múltiplos de 13
int main(){
	int X,Y,min,max;
	cin >> X >> Y;
	if(X < Y){
		min = X;
		max = Y;
	}else{
		max = X;
		min = Y;
	}
	int soma = 0;
	for(int i=min;i<=max;i++){
		if(i % 13 != 0){
			soma+=i;
		}
	}cout << soma << "\n";
}
