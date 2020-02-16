#include <stdio.h>

int main()
{
    double total;
    scanf("%lf", &total);
    int real = total;
    int moedas = (total - real) *100;
    int troco;
    printf("NOTAS:\n");
    troco = real / 100;
    real = real % 100;
    printf("%d nota(s) de R$ 100.00\n", troco);
    troco = real / 50;
    real = real % 50;
    printf("%d nota(s) de R$ 50.00\n", troco);
    troco = real / 20;
    real = real % 20;
    printf("%d nota(s) de R$ 20.00\n", troco);
    troco = real / 10;
    real = real % 10;
    printf("%d nota(s) de R$ 10.00\n", troco);
    troco = real / 5;
    real = real % 5;
    printf("%d nota(s) de R$ 5.00\n", troco);
    troco = real / 2;
    real = real % 2;
    printf("%d nota(s) de R$ 2.00\n", troco);
    troco = real / 1;
    real = real % 1;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", troco);
    troco = moedas / 50;
    moedas = moedas % 50;
    printf("%d moeda(s) de R$ 0.50\n", troco);
    troco = moedas / 25;
    moedas = moedas % 25;
    printf("%d moeda(s) de R$ 0.25\n", troco);
    troco = moedas / 10;
    moedas = moedas % 10;
    printf("%d moeda(s) de R$ 0.10\n", troco);
    troco = moedas / 5;
    moedas = moedas % 5;
    printf("%d moeda(s) de R$ 0.05\n", troco);
    troco = moedas / 1;
    moedas = moedas % 1;
    printf("%d moeda(s) de R$ 0.01\n", troco);
    return 0;
}
