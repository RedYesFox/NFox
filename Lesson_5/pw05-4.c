// 5.4 Вариант 21
// Числа Мерсенна (2^i - 1, i от 1 до 8) & Вывести кумулятивную сумму
#include <stdio.h>
#include <math.h>

int main(void)
{
    const int SIZE = 8;
    double massive[SIZE];

    for (int i = 1; i <= SIZE; i++)
    {
        massive[i-1] = pow(2, i) - 1.0;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%-6.2f ", massive[i]);
    }
    printf("\n");

    double sum = 0.0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += massive[i];
        printf("%-6.2f ", sum);
    }
    printf("\n");

    return 0;
}
