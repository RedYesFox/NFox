// 7.1 Вариант 3
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    while ((ch = getchar()) != EOF)
    {
        if (isdigit(ch))
            putchar(ch);
    }
    return 0;
}
