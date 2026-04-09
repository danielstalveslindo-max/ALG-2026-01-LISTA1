#include <stdio.h>

int main() {
    float num1;
    float num2;
    float num3;

    printf("Digite o numero 1:\n");
    scanf("%f", &num1);
    printf("Digite o numero 2:\n");
    scanf("%f", &num2);
    printf("Digite o numero 3:\n");
    scanf("%f", &num3);

    printf("A media e: %.2f\n", (num1 + num2 + num3) / 3);

    if (num1 >= num2 && num1 >= num3) {
        printf("O numero 1 e maior %f", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("O numero 2 e maior %f", num2);
    } else {
        printf("O numero 3 e maior %f", num3);
    }
    if (num1 <= num2 && num1 <= num3) {
        printf("O numero 1 e menor %f", num1);
    } else if (num2 <= num1 && num2 <= num3) {
        printf("O numero 2 e menor %f", num2);
    } else {
        printf("O numero 3 e menor %f", num3);
    }

    return 0;
}