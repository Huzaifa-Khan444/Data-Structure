#include<stdio.h>

int return_mod(int *p) {
    int i, j;
    int mod = p[0];
    int count;     
    int flag = 1;  
    int max_count = 0; 
    
    for (i = 0; i < 10; i++) {
        count = 0;  
        for (j = 0; j < 10; j++) {
            if (p[i] == p[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;  
            mod = p[i];  
        }
    }

    if (max_count == 1) {
        return -1; 
    }

    return mod;
}

int main() {
    int array[10];
    int i;
    for (i = 0; i < 10; i++) {
        printf("\nEnter an Array[%i]: ", i);
        scanf("%i", &array[i]);
    }


    int mod = return_mod(array);
    if (mod == -1) {
        printf("There is no mode (all elements are unique).\n");
    } else {
        printf("The mode of the array is: %i\n", mod);
    }

    return 0;
}