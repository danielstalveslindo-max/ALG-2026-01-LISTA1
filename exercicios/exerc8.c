#include <stdio.h>

int main() {

    int num, i;
    printf("Digite o numero:");
    scanf("%d", &num);

    printf("Tabuada do numero %d:\n", num);
    for (i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", num, i, num * i);
    }

return 0;
}