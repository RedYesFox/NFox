// ..2  #1-10    #2-17    #3-28
#include <stdio.h>
#include "myarrfunc.h"

#define MAX_SIZE 256

int main(void)
{
    int running = 1;
    int arr[MAX_SIZE];
    size_t limit = 0;
    char ch;
    while (running)
    {
        printf("\n************************************************************************************************\n");
        printf("  a\tЗадать размер массива\n");
        printf("  b\tЗаполнить массив\n");
        printf("  c\tПредставление массива (значения, адреса)\n");
        printf("  d\tВычисление суммы элементов в заданном диапазоне индексов k–m\n");
        printf("  e\tОпределение индексов элементов массива, находящихся в заданном диапазоне значений k–m\n");
        printf("  f\tВычисление индексов элементов, значения которых выше среднего значения массива\n");
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
                printf("Введите размер массива от 1 до %d: ", MAX_SIZE);
                if (scanf("%zu", &limit) != 1 || limit == 0 || limit > MAX_SIZE)
                {
                    printf("\nОшибка: размер должен быть от 1 до %d.\n", MAX_SIZE);
                    limit = 0;
                    while (getchar() != '\n');
                    break;
                }

                printf("Массиву задан размер %zu.\n", limit);
                break;
            }
            case 'b': {
                if (limit == 0)
                {
                    printf("Сначала задайте размер (пункт a).\n");
                    break;
                }
                printf("Введите %zu элементов: ", limit);
                for (size_t i = 0; i < limit; i++)
                {
                    if (scanf("%d", &arr[i]) != 1)
                    {
                        printf("Ошибка ввода элемента.\n");
                        while (getchar() != '\n');
                        break;
                    }
                }
                break;

            }

            case 'c': {
                if (limit == 0)
                {
                    printf("Массив пуст.\n");
                    break;
                }
                for (size_t i = 0; i < limit; i++)
                {
                    printf("arr[%zu] = %d, адрес: %p\n", i, arr[i], (void *)&arr[i]);
                }
                break;

            }
            case 'd': {
                if (limit == 0)
                {
                    printf("Массив пуст.\n");
                    break;
                }
                size_t k, m;
                printf("Введите начальный и конечный индексы (k m): ");
                if (scanf("%zu %zu", &k, &m) == 2)
                {
                    long long res = sum_in_idx_range(arr, limit, k, m);
                    printf("Сумма элементов: %lld\n", res);
                }
                else
                {
                    printf("Ошибка ввода.\n");
                    while (getchar() != '\n');
                }
                break;
            }
            case 'e': {
                if (limit == 0)
                {
                    printf("Массив пуст.\n");
                    break;
                }

                int k, m;
                printf("Введите диапазон значений (k m): ");
                if (scanf("%d %d", &k, &m) == 2)
                {
                    size_t indices[MAX_SIZE];
                    size_t count = find_indices_in_value_range(arr, limit, k, m, indices);
                    if (count == 0)
                    {
                        printf("Элементов в диапазоне [%d, %d] не найдено.\n", k, m);
                    }
                    else
                    {
                        printf("Найденные индексы: ");
                        for (size_t i = 0; i < count; i++)
                        {
                            printf("%zu ", indices[i]);
                        }
                        printf("\n");
                    }
                }
                else
                {
                    printf("Ошибка ввода.\n");
                    while (getchar() != '\n');
                }

                break;
            }
            case 'f': {
                if (limit == 0)
                {
                    printf("Массив пуст.\n");
                    break;
                }
                size_t indices[MAX_SIZE];
                size_t count = find_indices_above_average(arr, limit, indices);
                if (count == 0)
                {
                    printf("Элементов выше среднего не найдено.\n");
                }
                else
                {
                    printf("Индексы элементов выше среднего: ");
                    for (size_t i = 0; i < count; i++)
                    {
                        printf("%zu ", indices[i]);
                    }
                    printf("\n");
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
