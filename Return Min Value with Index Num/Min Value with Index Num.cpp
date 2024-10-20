#include<stdio.h>

int MinValue(int *array, int *index, int *MinimumValue) {
    *index = 0;
    *MinimumValue = array[0];

    for (int i = 1; i < 10; i++) {
        if (*MinimumValue > array[i]) {
            *MinimumValue = array[i];
            *index = i;
        }
    }
    return 0;
}

int main() {
    int array[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Enter Element %d: ", i);
        scanf("%d", &array[i]);
    }

    int MinimumValue;
    int index;

    MinValue(array, &index, &MinimumValue);
    printf("Minimum Value is %d\nand Index Number is %d\n", MinimumValue, index);

    return 0;
}