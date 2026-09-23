#include <stdio.h>
int main(){
    char nome[50];
    int idade;
    float altura;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%.2f", &altura);

    return 0;
}