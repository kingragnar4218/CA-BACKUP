#include<conio.h>
#include<time.h>

int main(){
	int n,sum=0,i;
	clock_t start,end;
	double diff;
	
	printf("Enter n : ");
	scanf("%d",&n);
	
	start = clock();
	
	for(i=n;i>0;i--){
		sum+=i;
	}
	
	end=clock();
	diff=(double)(end-start);
	
	printf("Sum : %d\n",sum);
	printf("Diff : %lf",diff);
	return 0;
}
