#include <math.h>
#include <stdio.h>
int main()
{
    int g;
    double P, S, r;
    printf("Krug--(1)\ntriangle--(2):\n");
    scanf("%d", &g);
    if (g == 1) {
        printf("Vvedite radius:");
        scanf("%lf", &r);
        S = 3.14 * r * r;
        P = 2 * 3.14 * r;
        printf("S=%lf P=%lf", S, P);
    }
    double a, b, c, P1;
    if (g == 2) {
        printf("Vvedite storonu:");
        scanf("%lf %lf %lf", &a, &b, &c);
        P = a + b + c;
        P1 = P / 2;
        S = sqrt(P1 * (P1 - a) * (P1 - b) * (P1 - c));
        printf("S=%lf P=%lf", S, P);
    }
    return 0;
}