#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int FF(const int size, char buff[], int i)
{
    for (; i < size; i++) {
        if (buff[i] == ' ') {
            continue;
        } else {
            break;
        }
    }
    return i;
}
int main()
{
    const int size = 30;
    char buff[size];
    fgets(buff, size, stdin);
    int i = 0;
    i = FF(size, buff, i);
    if (i >= size) {
        printf("oshibka");
        return 1;
    }
    const char circle[] = "circle";
    for (int g = 0; g < 6; g++, i++) {
        if (tolower(buff[i]) == circle[g]) {
            continue;
        } else {
            printf("oshibka");
            return 1;
        }
    }
    i = FF(size, buff, i);
    if (i >= size) {
        printf("oshibka");
        return 1;
    }
    float x, y, r;
    if (3 == sscanf(buff + i, "(%f %f, %f)\n", &x, &y, &r)) {
        printf(" x = %f y = %f R = %f\n", x, y, r);
        printf("Circle\n");
    } else {
        printf("oshibka");
    }
}