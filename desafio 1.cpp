/*Fa�a um programa para ler 20 n�meros inteiros, calcular a
m�dia dos mesmos e exibir todos os n�meros que
estiverem acima da m�dia. Considere a m�dia como sendo
7.0*/

#include <stdio.h>

int main() {

    int numeros[5];
    int *pont, count=0, soma=0;
    float media = 7.0, media_numeros=0; 

    pont = numeros; 
    for (int i = 0; i < 5; i++) {
        printf("Digite um n�mero: ");
        scanf("%d", (pont + i); 
        count++;
        soma+= *(pont +i);
    }
    media_numeros = soma/count;

    printf("N�meros acima da m�dia de 7.0:\n");
    for (int i = 0; i < 5; i++) {
        if (*(pont + i) > media) { 
            printf("%d\n", *(pont + i));
        }
    }
    printf("A media dos elementos e: %f", media_numeros);

}

