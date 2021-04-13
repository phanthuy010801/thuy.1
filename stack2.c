#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define max 1000
typedef struct {
	char top;
	char node[max]; 
}stack;
// khoi tao stack
void init( stack *s){
	s->top= -1;
}
int isEmpty(stack s){
	if(s.top==-1){
		return 0;
	}else return -1;
}
int isFull(stack s){
	if(s.top==max-1){ 
	return 0;
	}else return -1;
}
int push( stack *s, char c){
	if(isFull(*s)!= 0 ){
		s->node[s->top]= c;
		s->top++;
		return 0;
	}else return -1;
}
int pop(stack *s,  char *value){
	if(isEmpty(*s)!=0){
	s->top--;
	*value = s->node[s->top];
	return 0;
	} return -1;
}
int size(stack *s){
	return s->top +1;
}
int peek(stack *s){
	if(isEmpty(*s)!=0){
		printf s->top;
	}else return -1;
}

int main(){
	stack S;
	char data;
	int n,i;
	init(&S);
	char a[100];
	printf(" nhap vao day: ");
	gets(a);
	int m = strlen(a);
	while(n<m){
		scanf("%d",&n);
	}
	for(i=0;i < strlen(a);i++){
		push(&S,a[i]);
	}
	printf("so phan tu cau stack la:%d\n",size(&S));
	
	while(isEmpty(S)!=0){
		if(pop(&S, &data)!=0){
		printf(" %c ",data);
	    } 
	}
	while (i>n){
		pop(&S , &data);
	}
	if(peek(&S)!=-1){
		
	}
	
return 0;
}

