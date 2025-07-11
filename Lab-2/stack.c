#include<conio.h>
#include<stdio.h>
#define size 10

int stack[size];
int top=-1;
int main()
{
	int ch=0;
	int n,ret;
	
	while(ch!=5){
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. display\n");
		printf("4. peek\n");
		printf("5. exit\n");
		
		printf("Enter Your choice : ");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:
				printf("Enter Element : ");
				scanf("%d",&n);
				push(n);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Enter Index : ");
				scanf("%d",&n);
				ret = peek(n);
				printf("%d index no is : %d\n",n,ret);
				break;
			case 5:
				printf("Exit...\n");
				break;
		}
	}
	
}

int push(int n){
	if(top==size-1){
		printf("Overflow\n");
	}
	else{
		top++;
		stack[top]=n;
		printf("%d element add...\n",n);
	}
}

int pop(){
	if(top==-1){
		printf("Underflow\n");
	}
	else{
		stack[top]='0';
		top--;		
	}
}

int display(){
	int i;
	if(top==-1){
		printf("Underflow\n");
	}
	else{
		for(i=top;i>=0;i--){
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}

int peek(int index){
	if(index>top){
		printf("Index Out of bound\n");
	}
	else{
		return stack[top-index];
	}
}

