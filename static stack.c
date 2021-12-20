#define MAX_SIZE 100
#include<stdio.h>
#include<stdlib.h>
int pop(int*,int*);
void display (int , int* );
int stack_full(int , int );
int stack_empty(int );
void push(int, int *, int* );
int main()
{
	int n ,ch,top =-1, stack[MAX_SIZE] , ele_pop, ele;
	printf("enter the size of the stack : \n");
	scanf("%d",&n);
	for(;;)
	{
		printf("Enter 1 to push \n\
		Enter 2 to pop \n\
		Enter 3 to display \n\
		Enter 4 to exit . \n");
		scanf ("%d",&ch);
		switch (ch)
		{
			case 1 :
			if (stack_full(n,top))
			{
				printf ("Stack size is full. \n");
				break;
			}
			printf("Enter the element to be pushed : \n");
			scanf ("%d",&ele );
			push (ele , &top , stack);
			break;
			case 2 :
			if(stack_empty(top))
			{
				printf("stack is empty . \n");
				break;
				
			}
			ele_pop = pop(&top,stack);
			printf("The element popped is %d . \n",ele_pop);
			break;
			case 3 :
			printf ("The content of the stack is : \n");
			display(top, stack);
			break;
			case 4 :
			exit(0);
		}
	}
}
int stack_full(int n , int top)
{
	if (top == (n-1))
	{
		return 1;
	}
	return 0;
}
int stack_empty(int top)
{
	if(top == -1 )
	{
		return 1;
	}
	return 0;
	
}
void push(int ele, int *top, int stack[])
{
	stack[++(*top)]= ele;
	return;
	
}
int pop(int *top, int stack[])
{
 return stack[(*top)--];
}
void display (int top, int stack[])
{
	int i;
	for (i=top;i>=0;i--)
		printf("%d \n",stack[i]);
}



















