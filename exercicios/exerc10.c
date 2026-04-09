#include <stdio.h>

int main() {

float num, soma = 0, media;
int contador = 0;
printf("Digite valores positivos (negativo para sair):\n");
while(1){
    scanf("%f", &num);
    if(num <= 0){
        break;
    }
    soma += num;
    contador++;
}
if (contador > 0){
    media = soma / contador;
    printf("A media dos valores e: %2.f\n", media);
} else {
    printf("Nenhum valor positivo foi digitado.\n");
}
return 0;
}