```c
#include <stdio.h>

int main() {
    int numero, i, opcao;

    opcao = 1;

    while (opcao == 1) {

        printf("\nDigite um numero: ");
        scanf("%d", &numero);

        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("\nDeseja ver outra tabuada? (1-Sim / 0-Nao): ");
        scanf("%d", &opcao);
    }

    printf("Programa encerrado.\n");

    return 0;
}
```
