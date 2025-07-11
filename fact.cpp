#include<conio.h>

int main(){
	int i,fact=1,n;
	
	printf("Enter n : ");
	scanf("%d",&n);
	
	for(int i=n;i>=1;i--){
		fact*=i;
	}
	
	printf("%d factorial of %d",fact,n);
	
}
