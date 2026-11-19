#include "myarrfunc.h"

// 10 Функция Вычисление суммы элементов в заданном диапазоне индексов k–m
long long sum_in_idx_range(const int *arrptr, size_t limit, size_t k, size_t m)
{
    if (k > m || m >= limit)
    {
        return 0;
    }

    long long sum = 0;
    for (size_t i = k; i <= m; i++)
    {
        sum += arrptr[i];
    }
    return sum;
}

// 17 Функция Определение индексов элементов массива, находящихся в заданном диапазоне значений k–m
size_t find_indices_in_value_range(const int *arrptr, size_t limit, int k, int m, size_t *indices)
{
    if (k > m)
    {
        int temp = k;
        k = m;
        m = temp;
    }

    size_t count = 0;
    for (size_t i = 0; i < limit; i++)
    {
        int val = arrptr[i];
        if (val >= k && val <= m)
        {
            indices[count] = i;
            count++;
        }
    }
    return count;
}

// 28 Функция Вычисление индексов элементов, значения которых выше среднего значения массива
size_t find_indices_above_average(const int *arrptr, size_t limit, size_t *indices)
{
    if (limit == 0)
        return 0;

    double sum = 0.0;
    for (size_t i = 0; i < limit; i++)
    {
        sum += arrptr[i];
    }
    double avg = sum / limit;

    size_t count = 0;
    for (size_t i = 0; i < limit; i++)
    {
        if (arrptr[i] > avg)
        {
            indices[count] = i;
            count++;
        }
    }
    return count;
}
