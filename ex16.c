```c
#include <stdio.h>

int main() {
    int numero, i;
    int primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 2) {
        primo = 0;
    } else {
        for (i = 2; i < numero; i++) {

            if (numero % i == 0) {
                primo = 0;
            }
        }
    }

    if (primo == 1) {
        printf("O numero e primo.\n");
    } else {
        printf("O numero nao e primo.\n");
    }

    return 0;
}
```
