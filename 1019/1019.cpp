#include <iostream>
using namespace std;
int main()
{
    int tempo;
    int hora[3];
    cin >> tempo;
    hora[0] = tempo / 3600;
    tempo = tempo % 3600;
    hora[1] = tempo / 60;
    tempo = tempo % 60;
    hora[2] = tempo;
    cout << hora[0] << ":" << hora[1] << ":" << hora[2] << "\n";
    return 0;
}
