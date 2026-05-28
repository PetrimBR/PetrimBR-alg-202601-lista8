#include <stdio.h>
 
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
 
int main() {
    int n, i;
 
    printf("Digite quantos termos da sequencia Fibonacci deseja ver: ");
    scanf("%d", &n);
 
    if (n <= 0) {
        printf("Erro: digite um numero inteiro positivo.\n");
    } else {
        printf("\nSequencia de Fibonacci com %d termos:\n", n);
        for (i = 0; i < n; i++) {
            printf("%d", fibonacci(i));
            if (i < n - 1) {
                printf(", ");
            }
        }
        printf("\n");
    }
 
    return 0;
}
