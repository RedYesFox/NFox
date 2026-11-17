#ifndef MYARRFUNC_H
#define MYARRFUNC_H

#include <stddef.h>

// 10 Функция Вычисление суммы элементов в заданном диапазоне индексов k–m
long long sum_in_idx_range(const int *arrptr, size_t limit, size_t k, size_t m);

// 17 Функция Определение индексов элементов массива, находящихся в заданном диапазоне значений k–m
size_t find_indices_in_value_range(const int *arrptr, size_t limit, int k, int m, size_t *indices);

// 28 Функция Вычисление индексов элементов, значения которых выше среднего значения массива
size_t find_indices_above_average(const int *arrptr, size_t limit, size_t *indices);

#endif
