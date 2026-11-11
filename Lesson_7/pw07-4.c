// 7.4 Вариант 6
// Возвести обе переменные в квадрат
#include <stdio.h>

void my_f(int *a, int *b);

int main(void)
{
    int a = 4, b = 6;
    printf("Before function: a = %d b = %d\n", a, b);
    my_f(&a, &b);
    printf("After function: a = %d b = %d\n", a, b);
    return 0;
}

void my_f(int *a, int *b)
{
    *a = (*a) * (*a);
    *b = (*b) * (*b);
}
