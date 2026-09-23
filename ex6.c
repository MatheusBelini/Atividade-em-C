#include <stdio.h>
int main() {
    int numero;
    int mult;
    int i;
    
    printf("Digite um número para exibir sua tabuada: ");
    scanf("%d", &numero);

    for(i = 1; i < 11; i++) {
        mult = numero * i;
        printf("%d\n", mult);
    }

    return 0;
}