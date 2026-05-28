#include <stdio.h>

int soma(int n) {
    if (n == 1) {
        return 1;
    }
    return n + soma(n - 1);
}

int main() {
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: digite um numero inteiro positivo.\n");
    } else {
        printf("\nSoma de 1 ate %d = %d\n", n, soma(n));
    }

    return 0;
}
