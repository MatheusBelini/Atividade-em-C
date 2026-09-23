#include <stdio.h>
int main()
{
    int n1;
    int qtdMaiores = 0;
    int i;

    for (i = 1; i < 6; i++)
    {
        printf("Digite a %dº nota: ", i);
        scanf("%d", &n1);

        if(n1 >= 6){
            qtdMaiores++;
        }
    }

    printf("Quantidade de maiores ou iguais: %d", qtdMaiores);

    return 0;
}