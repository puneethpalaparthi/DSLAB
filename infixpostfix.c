#include<stdio.h>
#define MAX 100

char stack[MAX];
char infix[MAX];
char postfix[MAX];
int top=-1;


void infixtopostfix( )

void push(char x)
{	 
	if(top==MAX-1)
	{
		printf("stack is overflow");
		exit(1);
	}
	else 
	top++;
	stack[top]=a;
}


void pop(char x)
{
	if(top==1)
	{
		printf("stack is over flow");
		exit(1);
	}
	x=stack[top]
	top++
	return x;
}
int precedance(char x)
{
	if(x=='+'||x=='-')
	return 1;
	else if(x=='*'||x=='/')
	return 2;
	else if(x=='^')
	return 3;
	else 
	return 0;
}

void print()
{
	int i;'
	for(i=0;postfix[i]!='10';i++)
	printf("%c",postfix[i]);
	return;
}

int isempty()
{	
	if(top==-1)
	return 1;
	else 
	return 0;
}
	


