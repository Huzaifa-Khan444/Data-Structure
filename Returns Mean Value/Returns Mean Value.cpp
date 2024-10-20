#include <stdio.h>

int computeMean(int *array, float *mean) {
    float add = 0;  
    for (int i = 0; i < 10; i++) { 
        add += array[i];  
    }
    *mean = add / 10;  
    return 0; 
}

int main() {
    int array[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Enter Element %d: ", i + 1);  
        scanf("%d", &array[i]); 
    }
    
    float mean;
    computeMean(array, &mean);  
    printf("Mean Value is %.2f\n", mean); 
    
    return 0;
}