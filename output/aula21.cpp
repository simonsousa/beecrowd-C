#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	if(argc > 1){
		if(!strcmp(argv[1],"sol")){
			cout << "Vou ao puteiro." << "\n\n";			
		}
		else if(!strcmp(argv[1],"nublado")){
			cout << "Vou ao cabare." << "\n\n";			
		}else{
			cout << "Vou ficar na bronha.\n\n";
		}
		
	}
	
	system("pause");
	
	return 0;
	
}
