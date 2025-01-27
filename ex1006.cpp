#include <iostream>
#include <iomanip>
using namespace std;//media 2

int main(){
	double A,B,C, media;
	
	cin >> A;
	cin >> B;
	cin >> C;
	
	media = (A*2+B*3+C*5)/(2+3+5);
	
	cout << "MEDIA = "<< fixed << setprecision(1) << media << endl;
	
	return 0;
}
