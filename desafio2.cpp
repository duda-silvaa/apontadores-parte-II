
/*Dado um conjunto de 20 valores reais armazenados em um
vetor, faça um algoritmo que:
a) Imprima os valores que não são negativos.
b) Calcule e imprima a média dos valores negativos*/

#include <stdio.h>

int main (){
	
	int vet[5], soma = 0, count=0, med =0;
	int *pont;
	
	pont = vet;
	
	printf("Digite os 5 numeros do vetor\n");
	for (int i=0; i < 5; i++){
		scanf("%d", (pont +i));
	}
	
	//nao neg
	
	printf("numeros nao negativos\n");
	for (int i = 0; i <5; i++){
		if(*(pont +i)> 0){
			printf("%d\n", *(pont +i));
		}
	}
	
	//media dos negativos 
	printf("numeros negativos\n");
	for(int i=0; i<5; i++){
		if(*(pont+i) < 0){
			count++;
			soma+= *(pont+i);
		}
	}
	
	if(count > 0){
		med = soma/count;
			printf("A media dos numeros negativos e: %d", med);
	} else{
		printf("n tem num negativo");
	}
	

}
