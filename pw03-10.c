#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    wchar_t a[100], b[100], c[100];
    wscanf(L"%ls %ls %ls", a, b, c);

    wprintf(L"%-15ls | %20ls | %.5ls\n", a, b, c);

    return 0;
}
