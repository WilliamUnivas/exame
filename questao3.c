#include <stdio.h>

int calcularFatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * calcularFatorial(num - 1);
    }
}

int maiorFatorial(int num1, int num2) {
    int fatorial1 = calcularFatorial(num1);
    int fatorial2 = calcularFatorial(num2);

    return (fatorial1 > fatorial2) ? fatorial1 : fatorial2;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    int resultado = maiorFatorial(num1, num2);

    printf("O maior fatorial eh: %d\n", resultado);

    return 0;
}
