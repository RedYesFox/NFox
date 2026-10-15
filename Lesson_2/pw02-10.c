#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int id;
    unsigned int st;
    float volt;

    scanf("%x %o %f", &id, &st, &volt);

    uint8_t status = (uint8_t)st;
    uint16_t cheksum = (uint16_t)(id + status);

    printf("PACKET_ID: %d\n", id);
    printf("STATUS_CODE: %u\n", status);
    printf("STATUS_CHAR: %c\n", status);
    printf("VOLTAGE: %.2f\n", volt);
    printf("CHEKSUM: %u\n", cheksum);

    return 0;
}
