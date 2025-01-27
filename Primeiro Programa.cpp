#include <iostream>
using namespace std;

int n1, n2;//Variáveis Globais

#define pi 3.1415// variável pi de valor constante
#define canal cout << "Canal Fessor Bruno\n\n"; //criando uma constante-função

int main(){

	//cout << "Minhas anotações\n" << endl;
	
	//TIPO, NOME;
	//TIPO, NOME = VALOR;
	
	/*
	int vidas = 0;			*vai receber numeros inteiros: 10, 25, 100
	
	char letra = 'B';		*recebe variaveis de somente 1 caracter: "A"; "B"; "C";
	
	char letras[20];		*a variável passa a ser um vetor, e eu posso introduzir textos com até 20 caracteres 
	
	double decimal = 5.2;	*vai receber um caracter com casas decimais: 2.5; 5.6; 2.4999999
	
	float decimal2 = 5.2; 	*idêntico ao tipo double, mas tem uma precisão menor; 2.5
	
	bool vivo = true; 		*recebe valor lógico True:(Verdadeiro:1) ou False:(Falso:0)
	
	string nome = "simon";	*recebe uma variavel de texto maior: "Bruno"; "Simon"; "Pirorsvaldo"
	
	cout << vidas << "\n"; 		*Mostra na tela com quebra de linha
	
	cout << letra << "\n";		*Mostra na tela com quebra de linha
	
	cout << decimal << "\n";	*Mostra na tela com quebra de linha
	
	cout << decimal2 << "\n"; 	*Mostra na tela com quebra de linha
	
	cout << vivo << "\n"; 		*Mostra na tela com quebra de linha
	
	cout << nome << "\n"; 		*Mostra na tela com quebra de linha
	
	
	cout << "Digite o numero de vidas: ";
	
	cin >> vidas;				*o cin >> lê o valor digitado no teclado, e armazena na variável vidas
	
	cout << "Digite uma letra: ";
	
	cin >> letra;
	
	cout << "Dinheiro: ";
	
	cin >> decimal;
	
	cout << "Digite seu nome: ";
	
	cin >> nome; 
	
	vidas=100;
	
	cout <<"\nVidas: " << vidas << "\nLetra: " << letra << "\nDinheiro: " << decimal << "\n" << decimal2 << "\nVivo: " << vivo << "\nNome: " << nome << "\n";
	
	system("Pause") *pausa o console ate alguma tecla ser pressionada
	*/
	
	/*
	declaração múltipla de variáveis
	
	int vidas=3, tiros=500, life=100;
	
	/* 
	declaração individual de variáveis
	int vidas;
	int tiros;
	int life;
	
	int vidas; int tiros; int life;
	
	
	cout << pi << "\n";
	
	canal //diretiva canal tem o comando cout << "Canal Fessor Bruno\n\n";
	*/
	
	//Operadores Matemáticos: + - / * % (o que está dentro do parênteses é feito primeiro)
	
	/*
	int n3,n4; *Variáveis Locais; escopo local á função main.
	int res1, res2;
	
	
	n1=11;
	n2=3;
	n3=5;
	n4=2;
	
	res1= n1 / n2;
	res2= n1 % n2;
	
	cout <<"Divisao: " << res1 << "\n";
	
	
	cout <<"Resto: " << res2 << "\n\n";
	
	return 0;
			
		Incrementadores e decrementadores
		n1 = n1+1;
		n1+=1
		n1++
		
		n1 = n1-1;
		n1-=1;
		n1--
		
		n1 = n1 * 2
		n1*=2
		
		n1 = n1 % 2
		n1%=2
		
		n1 = n1 / 2
		n1/=2
		
		n++(pos incremento); 		++n(pre incremento);
		
		int n1, n2;
		
		n1=0;
		n2=10;
		
		n1 +=10;
		cout << n1 << "\n\n";
		cout << --n1 << "\n\n";
		*/
		
		
		
		/*
		Inversão de variáveis
		
		int num=10;
		
		cout << num << "\n\n";
		
		num = num * -1;
		
		cout << -num << "\n\n"; // vai mostrar a variável com o valor invertido
		
		cout << num << "\n\n";	
		
		
		int num = 10;
		
		cout << num << "\n\n";
		
		
		num=-num; recebe o proprio num invertido: -10
		
		cout << num << "\n\n";
		*/
		
		/* 
		operadores de comparação: 
		
		>	maior 
		<	menor
		>=  maior ou igual
		<=	menor ou igual
		==  igual 
		!=	diferente
		
		Teste lógico:
		10 < 5 = false;
		50 > 25 = true;
		100 > (50*2) = false
		100 >= (50*2) = true
		
		int num1=10;
		
		int num2=50;
		
		int sol=0;//se receber 0 é equivalende ao false; se receber 1 é equivalente ao True.
		
		char opc = 's';
		
		if(num1 > num2){
			cout << "Resultado VERDADEIRO\n";
		}else{
			cout << "Resultado FALSO\n";
			}	
	
		if(sol){
			cout << "Vou ao clube\n";
		}else{
			
			cout << "Vou ao cinema\n";
		}	
		
		int A, B, soma;
		
		cin >> A;
		cin >> B;
		
		soma = A + B;
		
		cout << "\n" << "O resultado da soma e: " << soma << endl;
		*/	
		
		
		/*	UTILIZAÇÃO DO IF e ELSE, junto com label(:) e GOTO(para voltar ao label inicio:);
			
		int n1,n2,res;
		char opc;
		
		inicio: // label (:) 
				
		cout << "Digite o valor da nota 1: ";
		cin >> n1;
		cout << "Digite o valor da nota 2: ";
		cin >> n2;
		
		res = n1 + n2;
		
			>= 60 		Aprovado
			>=40 e <60	Recuperação
			<40			Reprovado
		
		
		if(res >= 60){
			cout << "\nAluno Aprovado\n";
		}else if(res >= 40){
			cout << "\nAluno de Recuperacao\n";
		}else{
			cout << "\nAluno Reprovado\n";
		}
		
		
		cout << "\n\nDigitar outra notas?[s/n]: ";
		cin >> opc;
		
		if(opc == 's' or opc == 'S'){
			goto inicio; --> Volta para o label(:)
		}
			
		/*
			Operadores Lógicos
			
			AND(&&); e comercial
			
			OR(||); duas barras
			
			NOT(!); ponto de exclamação
		
		
		
		1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
		
		3 a 6
		
		10 a 14
		
		16 a 19
		
		
		if(num > 3 && num > 8){
			cout << "\n\nValor aceito\n";
		}else{
			cout << "\n\nNao aceito\n";
		}
		
		
		if(num < 3 || num > 8){
			cout << "\n\nValor aceito\n";
		}else{
			cout << "\n\nNao aceito\n";
		}
		
		if((num >= 3 && num <= 6) || (num > 9 && num < 15) || (num > 15 && num < 20)){
			cout << "\n\nValor aceito\n";
		}else{
			cout << "\n\nNAO aceito\n"; 
		}
		
		
		1 = verdadeiro / TRUE
		0 = falso / FALSE
		
		OPERADOR DE NEGAÇÃO (!) PARA O IF
		
		if(num == 1)	->	if(num)
		if(num == 0)	->	if(!num)
		if(num != 1)	-> 	if(!num)
		
		
		
		if(!num){
			cout << "\nVou ao clube\n";
		}else{
			cout << "\n\nVou ao cinema\n";
		}
		
		
		OPERADOR TERNÁRIO: (expressão) ? valor1 : valor2;
		
		(a expressão é verdadeira) ? execute valor1 : se for falsa, execute valor2;
		
		int n1,n2,nota;
		string res;
		
		cout << "Digite a primeira nota: ";
		cin >> n1;
		cout << "Digite a segunda nota: ";
		cin >> n2;
		
		nota=n1+n2;
		
		>=60 Aprovado
		<60  Reprovado
		
		(nota >= 60) ? res="Aprovado" : res="Reprovado";
				ou
		res=(nota >= 60) ? "Aprovado" : "Reprovado";
		
		cout << "\nSituacao do aluno: " << res << "\n";
		
		return 0;
		
		int n1,x;
		
		x=5;
		
		cout << "Digite um valor: ";
		cin >> n1;
		
		(n1 >=10) ? x++ : x--;
		
		cout << "\nNovo valor do X: " << x << "\n";
		
		return 0;
		*/
		
		/*
		switch(expressão){		--> vai comparar a expressão com os casos dentro do switch.
			case const1:
				comandos;
				break;
			
			case const2:
				comandos;
				break;
			
			case const3:
				comandos;
				break;	
			
			default: 			--> vem parar aqui quando nenhum dos casos tem um valor igual ao da expressão
				comandos;
		}
		
				
		int val;
		
		cout << "Selecione uma cor:\n";
		cout << "[1,2,3]=Verde, [4,5,6]=Azul\n";
		
		cin >> val;
		
		switch(val){
			case 1:
			case 2:
			case 3:
				cout << "Cor selecionada: Verde\n";
				break;
			case 4:
			case 5:
			case 6:
				cout << "Cor selecionada: Azul\n";
				break;
			default:
				cout << "Valor selecionado invalido\n";					
		}
		
		int val;
		
		cout << "Selecione um transporte:\n";
		cout << "[1] = Carro, [2] = Moto, [3] = Aviao, [4] = Helicoptero\n";
		
		cin >> val;
		
		switch(val){		
			case 1:
			case 2:
				cout << "\nTransporte terrestre\n";
				switch(val){ 								--> switch aninhado
					case 1:
						cout << "Carro selecionado\n";
						break;
					case 2:
						cout << "Moto selecionada\n";
						break;
				}
			   break;
			case 3:
			case 4:
				cout << "\nTransporte aéreo\n";
				switch(val){								--> switch aninhado	
					case 3:
						cout << "Aviao selecionado\n";
						break;
					case 4:
						cout << "Helicoptero selecionado\n";
						break;		
				}
				break;
						
			default: 			
				cout << "Transporte selecionado invalido\n";
		}
		cout << "\nPrograma finalizado\n";
		
		int cont;
		
		cont=0;
		while(cont++<20){ verificar sempre a condição de entrada, e o incremento, ou decremento; para gerar a condição de parada do while;
			cout << "Simon programador profissional - " << cont << "\n";
			if(cont == 10){
				break; faz a parada e sai do laço de repetição;
			}
		}

		cout << "\nRotina finalizada\n";
		
		COMANDO BREAK --> Interrompe a qualquer momento, a iteração de um loop;
		int cont;
		
		cont=0;
		while(cont<1000){
			cout << cont << "\n";
			if(cont == 500){
				break;
			}
			cont++;
		}
		
		int cont;
		
		cont = 20;
		do{  -> Executa esse bloco de comandos pelo menos uma vez, e checa a condição depois(e quando checa a condição, sai do bloco);
			cout << "Simon programador profissa - " << cont << endl;
			cont++;
		}while(cont < 20);
		
		cout << "\nRotina finalizada\n";
		
		*/
	/*
		for( inicialização ; condicional ; incremento/decremento){
			comandos	
	}
	
	
	int x,y,z;
	
	for(int tmp=0; tmp < 100000000; tmp++); 	->Pausa para executar o segundo for
	
	for(x=0, y=1, z=0; x <= 10 && z <= 6 ; x++, y+=2, z+=2){
		cout << x << " - " << y << " - " << z << "\n";
	}
	ARRAY-VETOR SIMPLES:
	
	como declarar uma array em c++?
	
	tipo nome[tamanho];
	
	ex:
	
	int carros[5]		
	*/
	
	/*
	int vetor[7];//int vetor vai ter 5 posições(de 0-4): int vetor0, vetor1, vetor2, vetor3, vetor4;
	int i;
	vetor[0]=10;
	vetor[1]=20;
	vetor[2]=30;
	vetor[3]=40;
	vetor[4]=50;
	vetor[5]=60;
	vetor[6]=70;
	//vetor[5]: é um erro, pq o array vai de 0-4;
	
	for(i = 0; i < 5;i++){
	cout << vetor[i] << "\n"; 
	
	for(i = 0;i < sizeof(vetor) / 4;i++){ 
		cout << vetor[i] << "\n";
	}
	
	for(inicializador ; sizeof(array)/4 ; i++){				 sizeof(array)/4: vai pegar 4 bytes e multiplicar pelo total de elementos, dividido por 4; 
		instruções a serem executadas	
	}
	
	int tam=6;
	int vetor[tam] = {10,20,30,40,50,60};
	int i;
	
	
	for(i = 0;i < tam; i++){
		cout << vetor[i] << "\n";
	}
	
	
	int vetor[5] = {0,1,2,3,4};
	int i;
	
	for(i = 0;i < sizeof (vetor) / 4; i++){
		cout << vetor[i] << "\n";
	}
	*/
	
	
	return 0;	
 }


