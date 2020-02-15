#include <stdio.h>
int main()
{
    float a, b, c;
    double media;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    a = a*0.2;
    b = b*0.3;
    c = c*0.5;
    media = a+b+c;
    printf("MEDIA = %.1lf\n", media);
    return 0;
}
