#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double dis, total;
    int tempo, vm;
    cin >> tempo;
    cin >> vm;
    dis = vm * tempo;
    cout << fixed << setprecision(3) << dis/12 <<"\n";
    return 0;
}
