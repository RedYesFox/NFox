// 6.1 Вариант 3
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    int d = 0, l = 0, s = 0;

    while ((ch = getchar()) != '#')
    {
        if (isdigit(ch))
            d++;
        else if (isalpha(ch))
            l++;
        else
            s++;

    }
    printf("Цифры: %d\n", d);
    printf("Буквы: %d\n", l);
    printf("Симолы: %d\n", s);


    return 0;
}
