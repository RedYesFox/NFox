// 7.5 Вариант 10
// Число Каталана C(n) = (2 * n)!/(n!(n+1)!)
#include <stdio.h>

unsigned long long cat_iter(int n);
unsigned long long cat_rec(int n);

int main(void)
{
    int n;
    while (scanf("%d", &n) == 1 && n >= 0)
    {
        printf("Rec:  %lld\n", cat_rec(n));
        printf("Iter: %lld\n", cat_iter(n));
    }

    printf("Завершение программы!\n");
    return 0;
}

// Число Каталана итеративно
unsigned long long cat_iter(int n)
{
    unsigned long long c = 1;
    for (int i = 1; i <= n; i++)
    {
        c = c * 2ULL * (2 * i - 1) / (i + 1);
    }
    return c;
}

// Число Каталана рекурсивно
unsigned long long cat_rec(int n)
{
    if (n == 0)
        return 1;
    return cat_rec(n - 1) * 2ULL * (2 * n - 1) / (n + 1);
}
