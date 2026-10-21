// 4.2  Вариант 10
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t m, h;
    scanf("%hu %hu", &m, &h);

    float result = (float)m * 9.81f * (float)h;

    printf("RESULT: %f\n", result);
    printf("SIZEOF uint16_t: %llu\n", (unsigned long long)sizeof(uint16_t));
    printf("SIZEOF float: %llu\n", (unsigned long long)sizeof(float));
    printf("SIZEOF unsigned long long: %llu\n", (unsigned long long)sizeof(unsigned long long));

    return 0;
}
