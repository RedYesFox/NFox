// 6.3 Вариант 30
// Числа Харшад (кратные сумме цифр) / Остальные
#include <stdio.h>

int d_sum(int n);

int main(void)
{
    int n;
    int hars = 0, ot = 0;
    double sum_h = 0.0, sum_o = 0.0;

    while (scanf("%d", &n) == 1 && n != 0)
    {
        int ds = d_sum(n);

        if (ds != 0 && n % ds == 0)
        {
            hars++;
            sum_h += n;
        }
        else
        {
            ot++;
            sum_o += n;
        }
    }

    printf("Harshad: %d, AVG: %.2f\n", hars, hars ? sum_h / hars : 0.0);
    printf("Other: %d, AVG: %.2f\n", ot, ot ? sum_o / ot : 0.0);
    return 0;
}

int d_sum(int n)
{
    int s = 0;
    if (n < 0)
        n = -n;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }

    return s;
}
