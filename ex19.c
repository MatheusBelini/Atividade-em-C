#include <stdio.h>

int main() {
    int numero;
    int tentativas = 0;

    printf("Digite um numero entre 1 e 100: ");
    scanf("%d", &numero);

    tentativas++;

    while (numero < 1 || numero > 100) {

        printf("Numero invalido!\n");

        printf("Digite novamente: ");
        scanf("%d", &numero);

        tentativas++;
    }

    printf("\nNumero valido: %d\n", numero);
    printf("Quantidade de tentativas: %d\n", tentativas);

    return 0;
}
```

