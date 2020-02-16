#include <stdio.h>
int main()
{
    int notas[7];
    int valor, resto;
    scanf("%d", &valor);
    notas[0] = valor / 100;
    resto = valor % 100;
    notas[1] = resto / 50;
    resto = resto % 50;
    notas[2] = resto / 20;
    resto = resto % 20;
    notas[3] = resto / 10;
    resto = resto % 10;
    notas[4] = resto / 5;
    resto = resto % 5;
    notas[5] = resto / 2;
    resto = resto % 2;
    notas[6] = resto / 1;
    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", notas[0]);
    printf("%d nota(s) de R$ 50,00\n", notas[1]);
    printf("%d nota(s) de R$ 20,00\n", notas[2]);
    printf("%d nota(s) de R$ 10,00\n", notas[3]);
    printf("%d nota(s) de R$ 5,00\n", notas[4]);
    printf("%d nota(s) de R$ 2,00\n", notas[5]);
    printf("%d nota(s) de R$ 1,00\n", notas[6]);
    return 0;
}
