#include <stdio.h>
#include <stdlib.h>
// 2 e 3 = 10 numero final


int iterativo(int num1, int num2){
	int i, mult=0;
	
	for(i=0; i<num2; i++ ){
		mult = mult + num1;
	}
	return mult;
}


int recursivo(int num1, int num2){
	if(num2 == 1){
		return (num1);
		
	}else{
		return(num1 + recursivo(num1, num2 -1)     );
		
	}
	
		

}




int main(){
	int num1, num2, i, mult, rec, ite;
	printf("Entre com um numero: ");
	scanf("%d", &num1);
	printf("Entre com outro numero: ");
	scanf("%d", &num2);
	
//	ite = iterativo(num1, num2);
//	printf("%d", ite);		
	rec = recursivo(num1, num2);
	printf("%d", rec);
	
}


