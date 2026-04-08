#include <stdio.h>
#include <math.h>

int main() {
    float n;
    printf("Digite um número: ");
    scanf("%f", &n);
    if (n < 0)
        printf("Não é possível calcular raiz de número negativo.\n");
    else
        printf("Raiz quadrada: %.4f\n", sqrt(n));
    return 0;
}