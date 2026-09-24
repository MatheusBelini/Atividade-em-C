```c
#include <stdio.h>

int main() {
    int opcao;
    float numero1, numero2, resultado;

    opcao = 0;

    while (opcao != 5) {

        printf("\n--- CALCULADORA ---\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &numero1, &numero2);

            resultado = numero1 + numero2;

            printf("Resultado: %.2f\n", resultado);

        } else if (opcao == 2) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &numero1, &numero2);

            resultado = numero1 - numero2;

            printf("Resultado: %.2f\n", resultado);

        } else if (opcao == 3) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &numero1, &numero2);

            resultado = numero1 * numero2;

            printf("Resultado: %.2f\n", resultado);

        } else if (opcao == 4) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &numero1, &numero2);

            if (numero2 == 0) {
                printf("Nao e possivel dividir por zero.\n");
            } else {
                resultado = numero1 / numero2;

                printf("Resultado: %.2f\n", resultado);
            }

        } else if (opcao == 5) {
            printf("Programa encerrado.\n");

        } else {
            printf("Opcao invalida.\n");
        }
    }

    return 0;
}
```
