#include <stdio.h>

int main() {
    float num1;

    printf("Digite um numero em segundos: \n");
    scanf("%f", &num1);

    printf("O numero digitado em minutos e: %3f\n", num1 / 60);
    printf("O numero digitado em horas e: %3f\n", num1 / 3600);
    printf("O numero digitado em segundos e: %3f\n", num1);

    return 0;
}