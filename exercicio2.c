#include <stdio.h>

double potencia(double base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    if (expoente < 0) {
        return 1.0 / potencia(base, -expoente);
    }
    return base * potencia(base, expoente - 1);
}

int main() {
    double base;
    int expoente;

    printf("Digite a base: ");
    scanf("%lf", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("\n%.2f ^ %d = %.2f\n", base, expoente, potencia(base, expoente));

    return 0;
}
