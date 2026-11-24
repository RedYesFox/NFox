#include "matrixfunc.h"

// 8 Функция Вычисление суммы элементов в заданном диапазоне индексов k–m
void sum_of_col(const int *matptr, size_t rows, size_t cols, long long *col_sums)
{
    for (size_t j = 0; j < cols; j++)
    {
        long long sum = 0;
        for (size_t i = 0; i < rows; i++)
        {
            sum += *(matptr + i * MAX_COLS + j);
        }
        *(col_sums + j) = sum;
    }
}

// 14 Определение количества элементов, значения которых ниже заданного k
size_t count_below_k(const int *matptr, size_t rows, size_t cols, int k)
{
    size_t count = 0;
    for (size_t j = 0; j < cols; j++)
    {
        for (size_t i = 0; i < rows; i++)
        {
            if (*(matptr + i * MAX_COLS + j) < k)
            {
                count++;
            }
        }
    }

    return count;
}

// 29 Вычисление суммы элементов столбцов, индексы которых находятся в заданном диапазоне k–m
long long sum_of_col_in_range(const int *matptr, size_t rows, size_t cols, size_t k, size_t m, long long *col_sums)
{
    if (k > m || m >= cols)
        return 0;

    long long total_sum = 0;
    for (size_t j = k; j <= m; j++)
    {
        long long sum = 0;
        for (size_t i = 0; i < rows; i++)
        {
            sum += *(matptr + i * MAX_COLS + j);
        }
        *(col_sums + j) = sum;
        total_sum += sum;
    }
    return total_sum;
}
