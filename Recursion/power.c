#include<conio.h>

int main(){
	int n,pow;
	printf("Enter n : ");
	scanf("%d",&n);
	
	printf("Enter Power : ");
	scanf("%d",&pow);
	
	int a=power(n,pow);
	printf("Power : %d",a);
	return 0;
}

int power(int n1,int pow1){
	int ans=n1;
	
	if(pow1==0){
		return 1;
	}
	
	return ans * power(n1,pow1-1);
	
}
