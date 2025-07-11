#include <stdio.h>

int linear(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1;  
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = linear(arr, size, key);

    if (result != -1) {
        printf("element found  index %d\n", result);
    } else {
        printf("element not found.\n");
    }

    return 0;
}

