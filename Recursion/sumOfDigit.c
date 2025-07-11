#include<conio.h>
int main(){
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("%d",sum(n));
}

int sum(int no){
	int sum=0;
	sum+=no%10;
	
	if(no==0){
		return 0;
	}
	return sum + sum(no/10);
}
