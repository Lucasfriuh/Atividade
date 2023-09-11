#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, a, b, c, n, resultado;


    printf("Digite um numero de tres algarismos (entre 100 e 999): ");
    scanf("%d", &x);


    if (x < 100 || x > 999) {
        printf("O numero digitado nao possui tres algarismos.\n");
        return 1;
    }


    a = x / 100;
    n = x % 100;
    b = n / 10;
    c = n % 10;


    if (abs(a - c) < 2) {
        printf("A diferenca entre as centenas e as unidades nao e maior ou igual a 2.\n");
        return 1;
    }


    int n_cba = c * 100 + b * 10 + a;


    int xyz = x + n_cba;

    int zyx = (xyz % 10) * 100 + ((xyz / 10) % 10) * 10 + (xyz / 100);


    resultado = xyz + zyx;


    printf("Resultado: %d\n", resultado);

    return 0;
}
