#include "libmain.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
float xp[1], yp[1], radius[1];
int FF(const int MAX_MESSAGE_LENGTH, char MESSAGE[], int i)
{
    for (; i < MAX_MESSAGE_LENGTH; i++) {
        if (MESSAGE[i] == ' ') {
            continue;
        } else {
            break;
        }
    }
    return i;
}

float S(float radius[])
{
    float S;
    float r = radius[0];
    S = M_PI * r * r;
    return S;
}

float P(float radius[])
{
    float P;
    float r = radius[0];
    P = 2 * M_PI * r;
    return P;
}

float S1(float radius[])
{
    float S1;
    float r = radius[1];
    S1 = M_PI * r * r;
    return S1;
}

float P1(float radius[])
{
    float P1;
    float r = radius[1];
    P1 = 2 * M_PI * r;
    return P1;
}

int peresechenie(int j, int c, float xp[], float yp[], float radius[])
{
    float d;
    int g = 0;
    char figure[] = "circle";
    for (int k = 0; k <= c; k++) {
        if (k == j)
            continue;
        d = fabs(sqrt(pow((xp[k] - xp[j]), 2) + pow((yp[k] - yp[j]), 2)));
        if (d <= (radius[j] + radius[k]))
            g++;
    }
    if (g > 0) {
        printf("\nperesechenie: ");
        printf("\n%s\n", figure);
        return 1;
    } else {
        return 0;
    }
}
