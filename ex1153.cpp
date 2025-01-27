#include <iostream>

using namespace std;//fatorial simples
int main(){
	int N, fat;
	cin >> N;

	fat = 1;
	for(int i = 1;i <= N; i++){
		fat*=i;
	}cout << fat << "\n";
}
