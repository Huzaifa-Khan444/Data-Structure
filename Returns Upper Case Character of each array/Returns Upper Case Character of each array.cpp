#include<stdio.h>

void UpperCase(char array[], int size) {
    int i;
    for (i = 0; i < size; i++) { 
        if (array[i] >= 'a' && array[i] <= 'z') { 
            array[i] = array[i] - 32;  
        }
    }
    return; 
}

int main() {
    char array[10];
    int size = 10;
    int i; 
    printf("Enter 10 Alphabetic Characters:\n");
    for (i = 0; i < size; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &array[i]); 
    }
    
    UpperCase(array, size);
    
    printf("Array in Upper Case:\n");
    for (i = 0; i < size; i++) {
        printf("%c", array[i]);
    }
    printf("\n");
    
    return 0;
}