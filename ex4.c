#include <stdio.h>
int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 18) {
        printf("Usuário menor de idade");
    } else {
        printf("Usuário maior de idade");
    }

    return 0;
}