#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    uint8_t reg = (uint8_t)input;

    uint8_t add  = reg + reg;
    uint8_t mul2 = reg * 2;
    uint8_t sqr  = reg * reg;

    printf("ADD: %u\n", (unsigned)add);
    printf("MUL2: %u\n", (unsigned)mul2);
    printf("SQR: %u\n", (unsigned)sqr);

    return 0;
}
