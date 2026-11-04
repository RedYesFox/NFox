// 5.5 Вариант 25
// Геометрический параметр | 2.5198 (a = 4.0, b = 2.0)
// sqrt3(a * b^2)
#include <stdio.h>
#include <math.h>

double calc(double a, double b);

int main(void)
{
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2 && a * b > 0.0)
    {
        printf("%.4f\n", calc(a, b));
    }

    return 0;
}

double calc(double a, double b)
{
    double x = a * b * b;
    return pow(x, 1.0 / 3.0);
}
