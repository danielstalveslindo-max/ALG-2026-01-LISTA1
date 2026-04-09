#include <stdio.h>

int main() {

int num, i, soma;
printf("Numerois perfeitos entre 1 a 100:\n");

for (num = 1; num <= 100; num++){
    soma = 0;

    for(i = 1; i < num; i++){
        if (num % i == 0){
        soma += i;
    }
}
    if (soma == num){
        printf("%d ", num);
    }
}
return 0;
}