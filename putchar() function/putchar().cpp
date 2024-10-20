#include<stdio.h>

#define LEFT_TOP '+'
#define RIGHT_TOP '+'
#define LEFT_BOT '+'
#define RIGHT_BOT '+'
#define HORIZ '-'
#define VERT '|'

int main(void)
{
    char i, j;

    putchar(LEFT_TOP);
    for (i = 0; i < 10; i++)
        putchar(HORIZ);
    putchar(RIGHT_TOP);
    putchar('\n');

    for (i = 0; i < 4; i++) {
        putchar(VERT);
        for (j = 0; j < 10; j++)
            putchar(' ');
        putchar(VERT);
        putchar('\n');
    }

    putchar(LEFT_BOT);
    for (i = 0; i < 10; i++)
        putchar(HORIZ);
    putchar(RIGHT_BOT);
    putchar('\n');

    for (i = 0; i < 4; i++) {
        putchar(VERT);
        for (j = 0; j < 10; j++)
            putchar(' ');
        putchar(VERT);
        putchar('\n');
    }

    putchar(LEFT_BOT);
    for (i = 0; i < 10; i++)
        putchar(HORIZ);
    putchar(RIGHT_BOT);
    putchar('\n');

    return 0;
}