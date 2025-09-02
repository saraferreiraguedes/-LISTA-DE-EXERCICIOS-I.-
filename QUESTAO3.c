#include <stdio.h>

int main() {
    int valor, n100, n50, n20, n10, n5, n2;

    printf("Digite o valor para saque: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido\n");
    } else {
        n100 = valor / 100;
        valor = valor % 100;

        n50 = valor / 50;
        valor = valor % 50;

        n20 = valor / 20;
        valor = valor % 20;

        n10 = valor / 10;
        valor = valor % 10;

        n5 = valor / 5;
        valor = valor % 5;

        n2 = valor / 2;
        valor = valor % 2;

        if (valor != 0) {
            printf("Nao tem como sacar esse valor\n");
        } else {
            printf("Cedulas:\n");
            printf("100: %d\n", n100);
            printf("50: %d\n", n50);
            printf("20: %d\n", n20);
            printf("10: %d\n", n10);
            printf("5: %d\n", n5);
            printf("2: %d\n", n2);
        }
    }

    return 0;
}