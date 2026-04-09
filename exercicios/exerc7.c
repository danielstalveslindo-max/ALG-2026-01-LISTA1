#include <stdio.h>

int main() {

int num, i, primo = 1;
printf("Digite um numero:");
scanf("%d", &num);

if (num <= 1){
    primo = 0;
}
for (i = 2; i <= num / 2; i++){
    if (num % i == 0){
        primo = 0;
        break;
    }
}
if (primo == 1){
    printf("O numero e primo");
}
else{
    printf("O numero nao e primo");
}

return 0;
}