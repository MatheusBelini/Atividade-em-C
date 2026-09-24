```c
#include <stdio.h>

int main() {
    int i;
    float nota1, nota2, media;
    int aprovados = 0;
    int exame = 0;
    int reprovados = 0;

    for (i = 1; i <= 10; i++) {
        printf("\nAluno %d\n", i);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;

        if (media >= 6) {
            aprovados++;
        } else if (media >= 4) {
            exame++;
        } else {
            reprovados++;
        }
    }

    printf("\nAprovados: %d\n", aprovados);
    printf("Exame: %d\n", exame);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}
```
