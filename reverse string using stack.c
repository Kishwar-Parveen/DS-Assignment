#include<stdio.h>

char s[10];
int top=-1;

void push(char);
void pop();

void push(char a)
{
	s[++top]=a;
}

void pop()
{
	printf("%c",s[top--]);
}

void main()
{
	char input[10];
	printf("\n Enter string:\n");
	scanf("%s",input);
	
	int i=0;
	while (input[i]!='\0')
	{
		push(input[i]);
		i++;
	}
	
	printf("\n Reversed string:\n");
	while(top!=-1)
	{
		pop();
	}
}
