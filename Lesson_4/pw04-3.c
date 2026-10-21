// 4.3  Вариант 16
#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int elem = 1;
    int i = 0;

    while (i++ < N)
    {
        printf("%d ", elem);
        elem = elem + 7;

    }
    printf("\n");
    return 0;
}
/*
 * Постфиксный i++ возвращает текущее значение счётчика, а потом увеличивает его
 * Префиксный ++i сначала увеличивает, потом возвращает
*/
