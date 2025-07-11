#include<conio.h>
#include<time.h>

int main(){
	int i,count=0;
	clock_t start,end;
	double diff;
		
	printf("Enter i : ");
	scanf("%d",&i);	
	
	start = clock();
	while(i!=0){
		i%=10;
		count++;
	}
	end=clock();
	diff=(double)(end-start);
	
	printf("count : %d",count);
	printf("Time : %d",diff);
	
	return 0;
	
}
