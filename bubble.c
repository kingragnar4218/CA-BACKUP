#include <stdio.h>
#include <time.h>


void bubbleSort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    clock_t start , end ;
  double time_taken;
  start=clock();
  
    int arr[] = {5, 2, 9, 1, 5, 6,};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    printf("sorted array: ");
    printArray(arr, n);
   end=clock();
   time_taken=(double)(end-start)/CLOCKS_PER_SEC;
   printf("%lf \t",time_taken );
    return 0;
}