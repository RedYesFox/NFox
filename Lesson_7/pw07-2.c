// 7.2 Вариант 24
// Количество слов, заканчивающихся на точку
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch, pre = ' ';
    int symbols = 0, words = 0;
    while ((ch = getchar()) != EOF)
    {
        symbols++;
        if (ch == '.' && !isspace(pre))
            words++;
        pre = ch;

    }
    printf("Total symbols: %d\n", symbols);
    printf("Words ending dots: %d\n", words);

    return 0;
}
