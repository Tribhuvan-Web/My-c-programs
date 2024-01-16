#include<stdio.h>
#include<cstdlib>
#define N 50
int STK[N];
int top = -1;
void push(int);
void traverse();
int main(){
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	push(num);
	traverse();
}
void push(int num){
	int temp;
	if(top == N-1){
    printf("Stack overflow");
	return;
	}
	for(int i = num;i>0;i--){
		
	temp = num%2;
	num /= 2;
	top = top+1;
	STK[top] = temp;
	if(num==0){
		break;
	  }
	}
}
	
void traverse(){
	int i;
	if(top == -1){
		printf("Stack emty");
		return;
	}
	for(i=top;i>=0;i--){
		printf("%d",STK[i]);
	}
}
	