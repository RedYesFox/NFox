// 6.2 Вариант 24
//24 Количество вхождений последовательности L"пока"
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    wint_t ch;
    wint_t pr = 0;
    int count = 0;

    while ((ch = getwchar()) != L'#')
    {
        if (pr == L'п' && ch == L'о')
        {
            wint_t l3 = getwchar();
            if (l3 == L'#')
                break;
            if (l3 == L'к')
            {
                wint_t l4 = getwchar();
                if (l4 == L'#')
                    break;
                if (l4 == L'а')
                {
                    count++;
                    pr = 0;
                    continue;
                }
                pr = l4;
                continue;
            }
            pr = l3;
            continue;
        }
        pr = (wint_t)ch;
    }

    wprintf(L"Количество: %d\n", count);
    return 0;
}
