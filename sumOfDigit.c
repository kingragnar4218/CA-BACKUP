#include<conio.h>

int main(){
	int i=456;
	int sum=0;
	
	while(i!=0){
		sum+=i%10;
		i/=10;
	}
	printf("%d",sum);
	
	return 0;
}
