// 5.3 Вариант 15
#include <stdio.h>
#include <math.h>

int main(void)
{
    int N;
    while (scanf("%d", &N) == 1 && N > 0)
    {
        double result = 0.0;
        for (int i = 1; i <= N; i++)
        {
            result += (double)i / pow(2, i);
        }
        printf("SUM: %.6f\n", result);
    }
    return 0;
}
