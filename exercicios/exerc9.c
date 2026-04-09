#include <stdio.h>

int main() {

int i, num, soma = 0;
for(i = 0; i <= 6; i++){
    for(num = i; num <= 6; num++){
    soma += i + num;
    }
}
printf("A soma dos numeros do domino: %d", soma);
return 0;
}