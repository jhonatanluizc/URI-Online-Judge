#include <iostream>
using namespace std;
int main()
{
    double total;
    cin >> total;
    int real = total;
    int moedas = (total - real) *100;
    int troco;
    cout << "NOTAS:\n";
    troco = real / 100;
    real = real % 100;
    cout << troco << " nota(s) de R$ 100.00\n";
    troco = real / 50;
    real = real % 50;
    cout << troco << " nota(s) de R$ 50.00\n";
    troco = real / 20;
    real = real % 20;
    cout << troco << " nota(s) de R$ 20.00\n";
    troco = real / 10;
    real = real % 10;
    cout << troco << " nota(s) de R$ 10.00\n";
    troco = real / 5;
    real = real % 5;
    cout << troco << " nota(s) de R$ 5.00\n";
    troco = real / 2;
    real = real % 2;
    cout << troco << " nota(s) de R$ 2.00\n";
    troco = real / 1;
    real = real % 1;
    cout << "MOEDAS:\n";
    cout << troco << " moeda(s) de R$ 1.00\n";
    troco = moedas / 50;
    moedas = moedas % 50;
    cout << troco << " moeda(s) de R$ 0.50\n";
    troco = moedas / 25;
    moedas = moedas % 25;
    cout << troco << " moeda(s) de R$ 0.25\n";
    troco = moedas / 10;
    moedas = moedas % 10;
    cout << troco << " moeda(s) de R$ 0.10\n";
    troco = moedas / 5;
    moedas = moedas % 5;
    cout << troco << " moeda(s) de R$ 0.05\n";
    troco = moedas / 1;
    moedas = moedas % 1;
    cout << troco << " moeda(s) de R$ 0.01\n";
    return 0;
}
