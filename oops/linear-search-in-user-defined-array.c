#include <stdio.h>

int main() {
    int size, i, search, found = 0;
    int min, max;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

int array[size];
    
    for(i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);

        if(i == 0) {
            min = max = array[i];
        } 
        else {
            if(array[i] < min) min = array[i];
            if(array[i] > max) max = array[i];
        }
    }

    printf("The array elements are: ");
    for(i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Minimum value in the array: %d\n", min);
    printf("Maximum value in the array: %d\n", max);

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for(i = 0; i < size; i++) {
        if(array[i] == search) {
            printf("Number found at position %d\n", i + 1); 
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Number not found in the array.\n");
    }

    return 0;
}


