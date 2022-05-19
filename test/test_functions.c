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

CTEST(suite2, peresechenie)
{
    xp[0] = 5, yp[0] = 5, radius[0] = 5;
    xp[1] = 6, yp[1] = 6, radius[1] = 5;
    int j = 0, c = 1, p = 0;
    int exp = 1;
    p = peresechenie(j, c, xp, yp, radius);
    ASSERT_EQUAL(exp, p);
}
