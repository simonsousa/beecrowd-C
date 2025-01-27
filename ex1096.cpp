#include <iostream>
using namespace std;//sequencia IJ 2
int main(){
	int i, j;
	j = 7;
	for(i = 0; i < 10; i++){
		if(i % 2 != 0){
			cout << "I=" << i << " " << "J=" << j-- << endl;
			cout << "I=" << i << " " << "J=" << j-- << endl;
			cout << "I=" << i << " " << "J=" << j-- << endl;
		}
		j = 7;
	}
}
