// 4.4  Вариант 22
#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int elem;
    int i = 0;


    while (i++ < N)
    {
        scanf("%d", &elem);

        // C(N, 2) = N * (N - 1) / 2
        long long res = (long long)elem * (elem - 1) / 2;
        printf("C(%d, 2) = %lld\n", elem, res);
    }
    return 0;
}
