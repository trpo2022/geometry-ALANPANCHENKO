#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "libmake/libmain.h"
int main()
{
    const int MAX_MESSAGE_LENGTH = 30;
    char MESSAGE[MAX_MESSAGE_LENGTH];
    fgets(MESSAGE, MAX_MESSAGE_LENGTH, stdin);
    int i = 0;
    i = FF(MAX_MESSAGE_LENGTH, MESSAGE, i);
    if (i >= MAX_MESSAGE_LENGTH) {
        printf("Volume exceeded");
        return 1;
    }
    const char circle[] = "circle";
    for (int g = 0; g < 6; g++, i++) {
        if (tolower(MESSAGE[i]) == circle[g]) {
            continue;
        } else {
            printf("Wrong text input");
            return 2;
        }
    }
    i = FF(MAX_MESSAGE_LENGTH, MESSAGE, i);
    if (i >= MAX_MESSAGE_LENGTH) {
        printf("Volume exceeded");
        return 1;
    }
    float x, y, r;
    if (3 == sscanf(MESSAGE + i, "(%f %f, %f)\n", &x, &y, &r)) {
        printf(" x = %.1f y = %.1f R = %.1f\n", x, y, r);
		printf("IT IS %s\n\n", circle);
		printf("P = %.2f\n", P(r));
		printf("S = %.2f\n", S(r));
		
    } else {
        printf("Incorrect input of coordinates");
    }
}
