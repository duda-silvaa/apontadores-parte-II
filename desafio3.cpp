/*Crie uma matriz quadrada e a inicialize de forma que seja
atribu�do o valor 2 quando os �ndices forem iguais e -3
quando os �ndices forem diferentes. Calcule e imprima na
tela apenas o somat�rio da diagonal principal.*/

#include <stdio.h>

int main(){
	int mat[3][3], soma_d =0;
	int *pont;
	
	pont = &mat[0][0];
	
	for (int i= 0; i<9; i++){
		
		int linha = i / 3;  // C�lculo da linha
        int coluna = i % 3;  // C�lculo da coluna
        
        if (linha == coluna) {
            *(pont + i) = 2;  // Atribui 2 quando linha == coluna (diagonal principal)
            soma_d += *(pont + i);  // Soma o valor da diagonal
        } else {
            *(pont + i) = -3;  // Atribui -3 para os elementos fora da diagonal
        }
	}
	
	 printf("\nSoma da diagonal principal: %d\n", soma_d);

}
