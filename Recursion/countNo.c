#include<conio.h>

int main(){
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	
	printf("%d",count(n));
	return 0;
}

int count(int no){
	int count=0;
	
	if(no==0){
		return 0;
	}
	
	count++;
	return count(no/10);
}
