#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct A {
	int top;
	char node[100];
}stack;
void init (stack *s){
	s->top = -1;
}
int isEmpty( stack s){
	if (s.top== -1){
		return 0;
	}else return -1;
}
int isFull( stack s){
	if(s.top== 100-1){
		return 0;
	}else return -1;
}
int push( stack *s, char c){
	if(isFull(*s)==0){
		return -1;
	}else{
		s->top++;
		s->node[s->top]= c;
		return 0;
	}
}
int pop ( stack *s){//khong dung data vif trong bai n
	if(isEmpty(*s)==0){
		return -1;
	} else{
		 s->top--;
		 return 0;
	}
}
int main(){
	printf("*****MAIN*****************\n");
	char s[100];
	stack A;
	init(&A);
	printf("nhap vao day ngoac don\n");
	gets(s);
//	int len;
	int i;
	int len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]=='('){
			push(&A,s[i]);
		}else{
			if(s[i]==')'){
				if(isEmpty(A)!=0){
					pop(&A);
				}else{
					printf("day khong hop le\n");
					break;
				}
				
			}
		}
	}
	if(A.top==-1){
		printf("day hop le\n");
	}else{
		printf("day khong hop le\n");
	}
return 0;
}

