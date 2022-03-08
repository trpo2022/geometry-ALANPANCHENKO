#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
        printf(" x = %f y = %f R = %f\n", x, y, r);
        printf("%s\n", circle);
    } else {
        printf("Incorrect input of coordinates");
    }
}