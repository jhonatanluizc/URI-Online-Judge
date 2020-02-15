#include <stdio.h>
int main()
{
   int cod1, cod2, q1, q2;
   double v1, v2;
   scanf("%d %d %lf", &cod1, &q1, &v1);
   scanf("%d %d %lf", &cod2, &q2, &v2);
   printf("VALOR A PAGAR: R$ %.2lf\n", (q1 * v1) + (q2 * v2));
}
