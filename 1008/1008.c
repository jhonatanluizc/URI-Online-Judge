#include <stdio.h>
int main()
{
    int n1,ht;

    float vh;
    scanf("%d", &n1);
    scanf("%d", &ht);
    scanf("%f", &vh);

    printf("NUMBER = %d\n", n1);
    printf("SALARY = U$ %.2f\n", ht*vh);

    return 0;
}
