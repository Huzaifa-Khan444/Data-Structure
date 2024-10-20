#include<stdio.h>

int MaxValue(int *array) {
    int c = array[0];  
    for (int i = 1; i < 10; i++) {  
        if (c < *(array + i)) {  
            c = *(array + i); 
        }
        printf("Maximum Value is %i\n",c);
    }
    return 0;
}

int main() { 
    int array[10];
    int i;
    
    for (i = 0; i < 10; i++) {
        printf("Enter Element %d: ", i + 1);  
        scanf("%d", &array[i]);
    }

    MaxValue(array);
	    return 0;
}