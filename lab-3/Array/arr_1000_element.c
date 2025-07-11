#include<conio.h>
#include<stdio.h>
#include<time.h>

#define N 1000000

void write_best_case(){
	int i;
	FILE *f = fopen("Best_Case_1000000.txt","w");
	for(i=1;i<=N;i++){
		fprintf(f,"%d ",i);
	}
	fclose(f);
}

void write_worst_case(){
	int i;
	FILE *f = fopen("Worst_Case_1000000.txt","w");
	for(i=N;i>=0;i--){
		fprintf(f,"%d ",i);
	}
	fclose(f);
}

void write_average_case()
{
	int i;
	int arr[N];
	for(i=1;i<=N;i++)
	{
		arr[i-1]=i;
	}
	
	//suffle array
	srand(time(NULL));
	for(i=N-1;i>0;i--)
	{
		int j=rand()%(i+1);
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	
	FILE *f=fopen("average_case_1000000.txt","w");
	for(i=0;i<N;i++)
	{
		fprintf(f,"%d ",arr[i]);
	}
	fclose(f);
}

 main(){
	write_best_case();
	write_worst_case();
	write_average_case();
	printf("Work..");
}
