#include <stdio.h>

int main() {

    int num1 = 0, num2 = 1, proximo;
    printf("Fibonacci (100 Primeiros numeros):\n");
    for (int i = 0; i < 100; i++) {
    printf("%d ", num1);
    proximo = num1 + num2;
    num1 = num2;
    num2 = proximo;
    }
    return 0;
}