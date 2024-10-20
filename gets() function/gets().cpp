#include <stdio.h>

int main(void)
{
    char string[80];
    printf("Input a string: ");
    fgets(string, sizeof(string), stdin);
    printf("The String input was: %s\n", string);
    return 0;
}