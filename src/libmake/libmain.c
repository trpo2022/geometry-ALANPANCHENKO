#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "libmain.h"
#include <math.h>
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

float S(float r){
	float S;
	S = M_PI * r * r;
	return S;
}

float P(float r){
	float P;
	P = 2 * M_PI * r;
	return P;
}

