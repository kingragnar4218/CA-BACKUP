#include<conio.h>

int main(){
	int i=123456,count=0;
	
	while(i!=0){
		i%=10;
		count++;
	}
	
	printf("%d",count);
	return 0;
	
}
