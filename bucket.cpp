#include <stdio.h>
#include <stdlib.h>

#define BUCKET_SIZE 10


void insertionSort(float *bucket, int n) {
    for (int i = 1; i < n; i++) {
        float temp = bucket[i];
        int j = i - 1;
        while (j >= 0 && bucket[j] > temp) {
            bucket[j + 1] = bucket[j];
            j--;
        }
        bucket[j + 1] = temp;
    }
}


void bucketSort(float arr[], int n) {
    
    float *buckets[BUCKET_SIZE];
    int bucketCounts[BUCKET_SIZE] = {0};

    
    for (int i = 0; i < BUCKET_SIZE; i++) {
        buckets[i] = (float *)malloc(n * sizeof(float));
    }

    
    for (int i = 0; i < n; i++) {
        int index = arr[i] * BUCKET_SIZE;
        buckets[index][bucketCounts[index]++] = arr[i];
    }

    
    for (int i = 0; i < BUCKET_SIZE; i++) {
        insertionSort(buckets[i], bucketCounts[i]);
    }

    
    int idx = 0;
    for (int i = 0; i < BUCKET_SIZE; i++) {
        for (int j = 0; j < bucketCounts[i]; j++) {
            arr[idx++] = buckets[i][j];
        }
        free(buckets[i]); 
    }
}


int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];
    printf("Enter %d numbers (between 0 and 1):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    bucketSort(arr, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%f ", arr[i]);
    }

    return 0;
}

