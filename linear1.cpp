#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000

int linear(int arr[], int size , int kay){
	for(int i=0 ; i<size ; i++){
		if(arr[i]==kay){
			return i ;
		}
	}
	return -1 ;
}

void printArray(int arr[], int size) {
	int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int readArrayFromFile(const char *filename, int arr[], int n) {
	int i;
    FILE *f = fopen(filename, "r");
    if (!f) {
        printf("Cannot open file %s\n", filename);
        return 0;
    }
    for (i = 0; i < n; i++)
        fscanf(f, "%d", &arr[i]);
    fclose(f);
    return 1;
}

int main(){

	
	 int arr[N];
    clock_t start, end;
    double time_taken;

    // Best Case
    if (readArrayFromFile("D:/harsh 118/ca/ravi nirmal/lab-3/Array/Best_Case_100000.txt", arr, N)) {
        start = clock();
       // linear(arr, N, 350);
        
    int result = linear(arr, N , 456);
	
	if(result != -1 ){
		printf("element found  %d\n", result );
	}
	else {
		printf("element not found \n ");
	}
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Best Case Time: %f ms\n", time_taken);
        // printArray(arr, N); // Uncomment to see sorted array
    }

    // Average Case
    if (readArrayFromFile("D:/harsh 118/ca/ravi nirmal/lab-3/Array/Avg_Case_1000.txt", arr, N)) {
        start = clock();
        //linear(arr, N , 350);
        int result = linear(arr, N , 589);
	
	if(result != -1 ){
		printf("element found  %d\n", result );
	}
	else {
		printf("element not found \n ");
	}
        
        
        
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Average Case Time: %f ms\n", time_taken);
        // printArray(arr, N);
    }

    // Worst Case
    if (readArrayFromFile("D:/harsh 118/ca/ravi nirmal/lab-3/Array/Worst_Case_1000.txt", arr, N)) {
        start = clock();
        //linear(arr, N,350 );
        
        int result = linear(arr, N , 123456789);
	
	if(result != -1 ){
		printf("element found  %d\n", result );
	}
	else {
		printf("element not found \n ");
	}
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Worst Case Time: %f ms\n", time_taken);
        // printArray(arr, N);
    }
	
	
	
	
	
	
	
	return 0 ; 
}
