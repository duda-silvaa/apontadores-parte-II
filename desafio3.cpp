/*Crie uma matriz quadrada e a inicialize de forma que seja
atribuído o valor 2 quando os índices forem iguais e -3
quando os índices forem diferentes. Calcule e imprima na
tela apenas o somatório da diagonal principal.*/

#include <stdio.h>

int main(){
	int mat[3][3], soma_d =0;
	int *pont;
	
	pont = &mat[0][0];
	
	for (int i= 0; i<9; i++){
		
		int linha = i / 3;  // Cálculo da linha
        int coluna = i % 3;  // Cálculo da coluna
        
        if (linha == coluna) {
            *(pont + i) = 2;  // Atribui 2 quando linha == coluna (diagonal principal)
            soma_d += *(pont + i);  // Soma o valor da diagonal
        } else {
            *(pont + i) = -3;  // Atribui -3 para os elementos fora da diagonal
        }
	}
	
	 printf("\nSoma da diagonal principal: %d\n", soma_d);

}
