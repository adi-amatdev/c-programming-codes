#include<stdio.h>
#include<ctype.h>
int eval_post(char *);
void push(int, int *, int *);
int pop(int *, int *);
int compute(int,int,char);
int main()
{
  char postfix[10];
  printf("enter a postfix expression . \n");
  scanf("%s",postfix);
  printf("The result of the evaluation is %d. \n",eval_post(postfix));
  return 0;
}
int eval_post(char postfix[]){
	int i=0, top=-1, stack[10],token,result,op1,op2;
	char symbol;
	while(postfix[i]!='\0'){
		symbol = postfix[i];
		if(isdigit (symbol))
		{
		  token = token - '0';
		  push(token,&top,stack);
		}
		else 
		{
			op2 = pop(&top,stack);
			op1 = pop(&top,stack);
			result =compute(op1,op2,symbol);
			push(result , &top , stack);
		}
		i+=1;
	}
	return (pop(&top,stack));
}
void push(int tn, int *top, int stack[])
{
	stack[++(*top)]= tn;
	return;
}
int pop(int *top, int stack[])
{
	return (stack[*top]--);
}
int compute (int op1, int op2, char symbol)
{
	switch(symbol)
	{
		case '+' : return (op1+op2);
		case '-' : return (op1-op2);
		case '*' : return (op1*op2);
		case '/' : return (op1/op2);
	}
	return 0;
}











