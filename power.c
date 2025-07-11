#include<conio.h>
int main(){
	int pow,n,ans=1;
	
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Ente Power : ");
	scanf("%d",&pow);
	
	int i;
	for(i=0;i<pow;i++){
		ans*=n;
	}
	
	printf("Power Of %d is %d",n,ans);
	
	return 0;
}
