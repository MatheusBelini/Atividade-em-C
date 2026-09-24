```c
#include <stdio.h>

int main() {
    int n, i;
    float numero, maior, menor, soma, media;

    printf("Quantos numeros voce quer digitar? ");
    scanf("%d", &n);

    soma = 0;

    for (i = 1; i <= n; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%f", &numero);

        soma = soma + numero;

        if (i == 1) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }

            if (numero < menor) {
                menor = numero;
            }
        }
    }

    media = soma / n;

    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}
```
