#include<stdio.h>
#include<stdlib.h>
#define MAX 100

char stack[MAX];
char infix[MAX];
char postfix[MAX];
int top=-1;



void push(char x)
{	 
	if(top==MAX-1)
	{
		printf("stack is overflow");
		exit(1);
	}
	else 
	top++;
	stack[top]=x;
}


void pop(char x)
{
	if(top==1)
	{
		printf("stack is over flow");
		exit(1);
	}
	x=stack[top];
	top++;
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
	int i;
	for(i=0;postfix[i]!='\0';i++)
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

void infixtopostfix()
{
	int i,j=0;
	char symbol,next;
	for(i=0;infix[i]!='\0';i++)
	symbol=infix[i];
	if(symbol=='(')
	push(symbol);
	else if (symbol==')')
	{	
		while(next=pop(1)!='(')
		{
		postfix[j++]=next;
		}
	}
	else if (symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'||symbol=='^')
	{
		while((!isempty)&&(precedance(stack[top]>=precedance(stack))))
		{
			postfix[j++]=pop();
			push(symbol);
		}
	}
	else
	{	
		postfix[j++]=symbol;
	
	while(!isempty())
	{
		postfix[j++]=pop();
		postfix[j]='\0';
	}
	}
}
int main()
{
	printf("enter the infix expression");
	scanf("%s",&infix[100]);
	infixtopostfix();                               
	print();
}







