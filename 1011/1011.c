#include <stdio.h>
int main()
{
    double r;
    scanf("%lf", &r);
    printf("VOLUME = %.3lf\n", (r*r*r) * 4/3 * 3.14159);
}
