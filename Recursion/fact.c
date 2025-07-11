#include<conio.h>

int main(){
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	
	printf("%d",fact(n));
	return 0;
}

int fact(int no){
	if(no==1){
		return 1;
	}
	return no*fact(no-1);
}
