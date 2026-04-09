#include <stdio.h>

int main() {

    float num1;
    float num2;
    char operador;
    printf("Digite o numero 1:\n");
    scanf("%f", &num1);
    printf("Digite o numero 2:\n");
    scanf("%f", &num2);
    printf("Digite o operador:\n");
    scanf(" %c", &operador);

    if (operador == '+') {
        printf("O resultado e: %f", num1 + num2);
    } else if (operador == '-') {
        printf("O resultado e: %f", num1 - num2);
    } else if (operador == '*') {
        printf("O resultado e: %f", num1 * num2);
    } else if (operador == '/') {
        if (num2 != 0) {
            printf("O resultado e: %f", num1 / num2);
        } else {
            printf("Erro: Divisao por zero nao e permitida.");
        }
    }
    return 0;
}