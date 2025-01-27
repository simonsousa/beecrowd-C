#include <iostream>
using namespace std; // Divisores I
int main(){
	int N;
	cin >> N;
	
	for(int i = 1; i <= N; i++){
		if(N % i == 0){
			cout << i << "\n";
		}
	}
}
