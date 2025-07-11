#include<conio.h>
#include<stdio.h>
#define size 5

int queue[size];
int rear=-1;
int front=-1;

int main(){
	int ch,n;
	
	while(ch!=4){
		printf("1. enque\n");
		printf("2. deque\n");
		printf("3. display\n");
		printf("4. exit\n");
		
		printf("Enter Your choice : ");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:
				printf("Enter Element : ");
				scanf("%d",&n);
				enque(n);
				break;
			case 2:
				deque();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Exit...\n");
				break;
			default:
				printf("=>Enter valid choice\n");
		}
	}
	
}
int deque(){
	if(front==-1 || front>rear){
		printf("underflow\n");
	}
	else{		
		queue[front]='\0';
		front++;
	}
}
int enque(int n)
{
	if(rear==size-1){
		printf("overflow\n");	
	}
	if(front==-1 && rear==-1){
		front++;
		rear++;
		queue[front]=n;
	}
	else{
		rear++;
		queue[rear]=n;
		
	}
}
int display(){
	int i;
	if(rear==-1){
		printf("underflow\n");
	}
	else{
		for(i=front;i<=rear;i++){
			printf("%d ",queue[i]);
		}
		printf("\n");
	}
}
