#include <iostream>
using namespace std;
int main()
{
    int total;
    int dia[3];
    cin >> total;
    dia[0] = total / 365;
    cout << dia[0] << " ano(s)" << "\n";
    total = total % 365;
    dia[1] = total / 30;
    cout << dia[1] << " mes(es)" << "\n";
    total = total % 30;
    dia[2] = total;
    cout << dia[2] << " dia(s)" << "\n";
    return 0;
}
