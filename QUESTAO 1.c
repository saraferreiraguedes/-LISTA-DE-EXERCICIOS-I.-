#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &a);

    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &b);

    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        } else if (a == b || b == c || a == c) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    } else {
        printf("Os valores fornecidos nao formam um triangulo valido.\n");
    }

    return 0;
}