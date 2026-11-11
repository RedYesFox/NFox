// 7.3 Вариант 30
// Произведение всех целых чисел между двумя значениями
#include <stdio.h>

long long mult(double a, double b);

int main(void)
{
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2)
    {
        printf("Result: %lld\n", mult(a, b));
    }
    return 0;
}

long long mult(double a, double b)
{
    int low = (int)(a < b ? a : b);
    int high = (int)(a < b ? b : a);
    long long res = 1;
    for (int i = low; i <= high; i++)
    {
        res *= i;
    }

    return res;
}
