#include<conio.h>

int main(){
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	
	printf("%d",sum(n));
	return 0;
}

int sum(int i){
	int sum = 0;
	if(i==1){
		return 1;
	}
	
	return sum + sum(i-1);
}
