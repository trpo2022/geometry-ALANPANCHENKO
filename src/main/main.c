#include "libmake/libmain.h"
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
float xp[1] = {0}, yp[1] = {0}, radius[1] = {0};

int main()
{
    int povtor = 2;
    int c = 1;
    while (povtor) {
        const int MAX_MESSAGE_LENGTH = 30;
        char MESSAGE[MAX_MESSAGE_LENGTH];
        fgets(MESSAGE, MAX_MESSAGE_LENGTH, stdin);
        int i = 0;
        i = FF(MAX_MESSAGE_LENGTH, MESSAGE, i);
        if (i >= MAX_MESSAGE_LENGTH) {
            printf("Volume exceeded");
            return 0;
        }
        const char circle[] = "circle";
        for (int g = 0; g < 6; g++, i++) {
            if (tolower(MESSAGE[i]) == circle[g]) {
                continue;
            } else {
                printf("Wrong text input");
                return 1;
            }
        }
        i = FF(MAX_MESSAGE_LENGTH, MESSAGE, i);
        if (i >= MAX_MESSAGE_LENGTH) {
            printf("Volume exceeded");
            return 0;
        }
        float x, y, r;
        if (3 == sscanf(MESSAGE + i, "(%f %f, %f)\n", &x, &y, &r)) {
            if (povtor == 2) {
                xp[0] = x;
                yp[0] = y;
                radius[0] = r;
                printf(" x = %.1f y = %.1f R = %.1f\n",
                       xp[0],
                       yp[0],
                       radius[0]);
                printf("P = %.2f\n", P(radius));
                printf("S = %.2f\n", S(radius));
            }

            if (povtor == 1) {
                xp[1] = x;
                yp[1] = y;
                radius[1] = r;
                printf(" x = %.1f y = %.1f R = %.1f\n",
                       xp[1],
                       yp[1],
                       radius[1]);
                printf("P1 = %.2f\n", P1(radius));
                printf("S1 = %.2f\n", S1(radius));
            }
        } else {
            printf("Incorrect input of coordinates\n");
            return 2;
        }

        povtor--;
        if (povtor == 0)
            continue;
    }

    for (int j = 0; j < c; j++) {
        if (c > 0)
            intersect(j, c, xp, yp, radius);
    }
    return 3;
}
