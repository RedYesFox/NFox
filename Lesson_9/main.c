// ..2  #1-8    #2-14    #3-29
#include <stdio.h>
#include "matrixfunc.h"

#define MAX_ROWS 100
#define MAX_COLS 100

int main(void)
{
    int running = 1;
    int matrix[MAX_ROWS][MAX_COLS];
    size_t rows = 0, cols = 0;
    char ch;

    while (running)
    {
        printf("\n************************************************************************************************\n");
        printf("  a\tЗадать размер матрицы (строки, столбцы)\n");
        printf("  b\tЗаполнить матрицу\n");
        printf("  c\tПредставление матрицы (значения, адреса элементов)\n");

        printf("  d\tВычисление суммы элементов каждого столбца матрицы\n");
        printf("  e\tОпределение количества элементов, значения которых ниже заданного k\n");
        printf("  f\tВычисление суммы элементов столбцов, индексы которых находятся в заданном диапазоне k–m\n");
        printf("  g\tВыход\n");
        printf("************************************************************************************************\n");
        printf("Выберете пункт: ");

        if (scanf(" %c", &ch) != 1 || ch =='g')
        {
            running = 0;
            printf("\nВыходим..\n\n");
            continue;
        }

        while (getchar() != '\n');
        switch (ch)
        {
            case 'a': {
                printf("Введите количество строк и столбцов (от 1 до %d): ", MAX_ROWS);
                if (scanf("%zu %zu", &rows, &cols) != 2 || rows == 0 || cols == 0 || rows > MAX_ROWS || cols > MAX_COLS)
                {
                    printf("Ошибка: размеры должны быть от 1 до %d.\n", MAX_ROWS);
                    rows = 0; cols = 0;
                    while (getchar() != '\n');
                    break;
                }
                printf("Матрица %zux%zu создана.\n", rows, cols);
                break;
            }

            case 'b': {
                if (rows == 0 || cols == 0)
                {
                    printf("Сначала задайте размер (пункт a).\n");
                    break;
                }
                printf("Введите %zu элементов матрицы:\n", rows * cols);
                for (size_t i = 0; i < rows; i++)
                    for (size_t j = 0; j < cols; j++)
                        if (scanf("%d", &matrix[i][j]) != 1)
                        {
                            printf("Ошибка ввода.\n");
                            while (getchar() != '\n');
                            break;
                        }
                break;
            }

            case 'c': {
                if (rows == 0 || cols == 0)
                {
                    printf("Матрица пуста.\n");
                    break;
                }
                printf("Значения и адреса (демонстрация строкового хранения):\n");
                for (size_t i = 0; i < rows; i++)
                {
                    for (size_t j = 0; j < cols; j++)
                    {
                        printf("[%zu][%zu] = %d (адрес: %p)  ", i, j, matrix[i][j], &matrix[i][j]);
                    }
                    printf("\n");
                }
                break;

            }
            case 'd': {
                if (rows == 0 || cols == 0)
                {
                    printf("Матрица пуста.\n");
                    break;
                }

                long long col_sums[MAX_COLS];
                sum_of_col(&matrix[0][0], rows, cols, col_sums, MAX_COLS);
                printf("Суммы по столбцам:\n");
                for (size_t j = 0; j < cols; j++)
                    printf("Столбец %zu: %lld\n", j, col_sums[j]);
                break;
            }
            case 'e': {
                if (rows == 0 || cols == 0)
                {
                    printf("Матрица пуста.\n");
                    break;
                }

                int k;
                printf("Введите k: ");
                if (scanf("%d", &k) == 1)
                {
                    size_t cnt = count_below_k(&matrix[0][0], rows, cols, k, MAX_COLS);
                    printf("Количество элементов < %d: %zu\n", k, cnt);
                }
                else
                {
                    printf("Ошибка ввода.\n");
                    while (getchar() != '\n');
                }

                break;
            }

            case 'f': {
                if (rows == 0 || cols == 0)
                {
                    printf("Матрица пуста.\n");
                    break;
                }

                size_t k, m;
                printf("Введите диапазон индексов столбцов (k m): ");
                if (scanf("%zu %zu", &k, &m) == 2)
                {
                    long long col_sums[MAX_COLS];
                    long long total = sum_of_col_in_range(&matrix[0][0], rows, cols, k, m, col_sums, MAX_COLS);
                    printf("Суммы по столбцам в диапазоне [%zu, %zu]:\n", k, m);
                    for (size_t j = k; j <= m && j < cols; j++)
                        printf("Столбец %zu: %lld\n", j, col_sums[j]);
                    printf("Общая сумма: %lld\n", total);
                }
                else
                {
                    printf("Ошибка ввода.\n");
                    while (getchar() != '\n');
                }
                break;
            }

            default:

                printf("Неверный Пункт Меню!\n");
                printf("Выберете из предложенных:");
                break;
        }
    }
    printf("Завершение программы!\n");
    return 0;
}
