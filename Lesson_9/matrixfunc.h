#include <stddef.h>

#define MAX_ROWS 128
#define MAX_COLS 128

// 8 Вычисление суммы элементов каждого столбца матрицы
void sum_of_col(const int *matptr, size_t rows, size_t cols, long long *col_sums);

// 14 Определение количества элементов, значения которых ниже заданного k
size_t count_below_k(const int *matptr, size_t rows, size_t cols, int k);

// 29 Вычисление суммы элементов столбцов, индексы которых находятся в заданном диапазоне k–m
long long sum_of_col_in_range(const int *matptr, size_t rows, size_t cols, size_t k, size_t m, long long *col_sums);
