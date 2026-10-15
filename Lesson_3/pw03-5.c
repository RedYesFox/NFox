#include <stdio.h>

int main(void)
{
    char c;
    scanf("%c", &c);

    printf("CODE_DEC: %d\n", c);
    printf("CODE_HEX: %x\n", c);
    printf("CODE_OCT: %o\n", c);

    char upper = c - 'a' + 'A';
    printf("UPPER: %c\n", upper);

    printf("NEXT: %c\n", c + 1);
    printf("PREV: %c\n", c - 1);

    return 0;
}
