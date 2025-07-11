#include <stdio.h>
int main()
{
  int i;
  int[] arr = new int[10];
  for(i=0;i<10;i++){
    printf("Enter Array element : ");
    scanf("%d",&arr[i]);
  }
  
  bubble(arr,10)
  return 0
}

void bubble(int a[],int n){
  int temp,i,j;
  for(i=0;i<n;i++){
    for(j=0;j<n-temp-1;j++){
      if(arr[i]>arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  for(j=0;j<n;j++){
    printf("%d ",arr[i]);
  }
}
