#include <stdio.h>
#include <time.h>
int main()
{
  int i,j;
  clock_t start,end;
  double time;
  
  int arr[10];
  for(i=0;i<10;i++){
    printf("Enter Array element : ");
    scanf("%d",&arr[i]);
  }
  
  start = clock();
  bubble(arr,10);
  end=clock();
  
  for(j=0;j<10;j++){
    printf("%d ",arr[j]);
  }
  
  time = (double)end-start/CLOCKS_PER_SEC;
  
  printf("\n Time Taken : 21%lf",time);
}

void bubble(int arr[],int n){
  int temp,i,j;
  for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  
  
}
