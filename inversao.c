//Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 - 321


#include <stdlib.h>
#include <stdio.h>

int inversao(int n){

	if(n==0){
		
		return n;
	}else{
		printf("%d", n%10);
		n = n/10;
		return inversao(n);
	}
	
	
}


int main(){
	int n, inv;
	printf("Insira um numero inteiro: ");
	scanf("%d", &n);
	inv = inversao(n);
	printf("O numero %d invertido ficou:  %d", n, inv);
	system("pause");
	return 0;
}
