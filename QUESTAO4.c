#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
void adivinhar(int numero) {
    int palpite;
    printf("Digite seu palpite entre 1 e 100: ");
    scanf("%d", &palpite);

    if (palpite == numero) {
        printf("Parabens, voce acertou!\n");
    } else if (palpite > numero) {
        printf("Muito alto, tente um numero menor!\n");
        adivinhar(numero);
    } else {
        printf("Muito baixo, tente um numero maior!\n");
        adivinhar(numero); 
    }
}

int main(void) {
    srand(time(NULL));         
    int numero = rand() % 100 + 1; 

    printf("Tente adivinhar o numero secreto!\n");
    adivinhar(numero);
    return 0;
}