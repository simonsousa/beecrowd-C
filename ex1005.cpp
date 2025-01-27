#include <iostream>
#include <iomanip>

using namespace std; // Média 1

int calcularMedia(int x, int y){
	double media = (x * 3.5 + y * 7.5)/(3.5 + 7.5);
	return media;
}
int main(){
	double A, B;
	cin >> A >> B;
	cout << "MEDIA = "<< fixed << setprecision(5) << calcularMedia(A,B) << "\n"; 
	
	return 0;
	
}
