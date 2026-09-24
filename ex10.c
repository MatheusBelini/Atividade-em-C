```c
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite o primeiro peso: ");
    scanf("%d", &peso1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite o segundo peso: ");
    scanf("%d", &peso2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite o terceiro peso: ");
    scanf("%d", &peso3);

    if (peso1 == 0 || peso2 == 0 || peso3 == 0) {
        printf("Erro! O peso nao pode ser 0.\n");
    } else {
        media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / 
                (peso1 + peso2 + peso3);

        printf("Media: %.2f\n", media);

        if (media >= 6) {
            printf("Aprovado!\n");
        } else if (media >= 4) {
            printf("Exame!\n");
        } else {
            printf("Reprovado!\n");
        }
    }

    return 0;
}
```
