#include <stdio.h>
int main() {
    float media;
    int freq;

    printf("Digite sua média: ");
    scanf("%f", &media);

    printf("Digite sua frequência ('0% - 100%'): ");
    scanf("%d", &freq);

    if (media >= 6 && freq >= 75) {
        printf("Aprovado!");
    } else {
        printf("Reprovado");
    }

    return 0;
}