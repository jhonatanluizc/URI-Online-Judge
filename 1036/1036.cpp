#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    double a,b,c, x1, x2, delta;
    cin >> a >> b >> c;
    if( (sqrt( pow(b, 2) - ( 4*a*c )) < 0) || (2 * a == 0) || (pow(b, 2) - ( 4*a*c ) < 0) )
    {
        cout << "Impossivel calcular\n";
    }
    else
    {
        x1 = ( (b * -1) + sqrt( pow(b, 2) - ( 4*a*c )) ) / (2 * a);
        x2 = ( (b * -1) - sqrt( pow(b, 2) - ( 4*a*c )) ) / (2 * a);
        cout << fixed << setprecision(5) << "R1 = " << x1 << "\n";
        cout << "R2 = " << x2 << "\n";
    }
    return 0;
}
