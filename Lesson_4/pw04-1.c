// 4.1  Вариант 3
#include <stdio.h>
#define KOEF 1000

int main(void)
{
    int W;

    while (scanf("%d", &W) == 1 && W > 0)
    {
        printf("\e[A1\r%d кДж = %d МДж + %d кДж\n", W, W / KOEF, W % KOEF);
    }

    return 0;
}
