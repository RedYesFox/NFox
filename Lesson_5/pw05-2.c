#include <stdio.h>
#define HEIGHT 5

int main(void)
{
    const char symbols[] = " =";

    for (int row = 0; row < HEIGHT; row++) {
        for (int col = 0; col < HEIGHT; col++) {
            int border = (row == 0) + (row == HEIGHT - 1) + (col == 0) + (col == HEIGHT - 1);

            int index = (border > 0);

            printf("%c", symbols[index]);
        }
        printf("\n");
    }
    return 0;
}
