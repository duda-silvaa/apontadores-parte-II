/*Escreva um programa que tenha uma matriz de 12
elementos quaisquer informados pelo usu�rio e imprima
quantos elementos s�o pares e quantos s�o �mpares, bem
como a soma dos n�meros pares e a soma dos n�meros
�mpares.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int mat[3][4], pares =0, impares =0, somaP=0, somaI=0;
	int *pontMat;
	
	pontMat = &mat[0][0];
	
	printf("Digite os 12 elementos da matriz:\n ");
	for (int i=0; i < 12; i++){
		scanf("%d", pontMat+i);
	}
	
	//quais sao pares 
	for(int i =0; i < 12; i++){
		if(*(pontMat +i) %2 == 0){
			pares++;
			somaP+= *(pontMat +i);
		} else{
			impares++;
			somaI += *(pontMat +i);
		}
	}
	
	//prints
	
	printf("Quant pares: %d\n", pares);
	printf("Soma pares: %d\n", somaP);
	
	printf("Quant impares: %d\n", impares);
	printf("Soma ipares: %d\n", somaI);
		
}
