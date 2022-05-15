#include <ctest.h>
#include <libmake/libmain.h>
#include <math.h>
#include <stdio.h>
#define intersect_size 9
#define circle_size 3
float xp[1] = {0}, yp[1] = {0}, radius[1] = {0};

CTEST(suite, S_circle)
{
    const double exp = 7.068583;
    xp[0] = 0, yp[0] = 0, radius[0] = 1.5;
    double res = S(radius);
    ASSERT_DBL_NEAR(exp, res);
}

CTEST(suite, P_circle)
{
    const double exp = 9.424778;
    xp[0] = 0, yp[0] = 0, radius[0] = 1.5;
    double res = P(radius);
    ASSERT_DBL_NEAR(exp, res);
}

CTEST(suite1, S1_circle)
{
    const double exp = 7.068583;
    xp[1] = 0, yp[1] = 0, radius[1] = 1.5;
    double res = S1(radius);
    ASSERT_DBL_NEAR(exp, res);
}

CTEST(suite1, P1_circle)
{
    const double exp = 9.424778;
    xp[1] = 0, yp[1] = 0, radius[1] = 1.5;
    double res = P1(radius);
    ASSERT_DBL_NEAR(exp, res);
}

CTEST(suite2, intersect)
{
    xp[0] = 5, yp[0] = 5, radius[0] = 5;
    xp[1] = 6, yp[1] = 6, radius[1] = 5;
    int j = 0, c = 1, res = 0;
    int exp = 1;
    for (int k = 0; k <= c; k++) {
        if (k == j)
            continue;
        float d = fabs(sqrt(pow((xp[k] - xp[j]), 2) + pow((yp[k] - yp[j]), 2)));
        if (d <= (radius[j] + radius[k]))
            res++;
    }
    ASSERT_EQUAL(exp, res);
}
