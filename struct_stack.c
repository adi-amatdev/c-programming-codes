#define SIZE 5
#include<stdio.h>
#include<stdlib.h>
int count=0;
typedef struct 
{
	int sid;
	char sname[10];
	char gender ;	
}STD;
void display(int top, STD stack[]);
void push(STD new, int *top, STD stack[]);
STD pop(int *top, STD stack[]);
int main(){
	STD stack[SIZE], new_ele , pop_ele;
	int top =-1, ch;
	for(;;){
		printf("\n press 1 to push \n\
		press 2 to pop \n\
		press 3 to display \n\
		press 4 to exit . \n");
		scanf("%d",&ch);
		switch(ch){
			case 1 : if(top == (SIZE-1)){
				printf("\n stack if full . \n");
				break;
			}
			printf("Enter the details : \n");
			printf("Enter ID , gender & name \n");
			scanf ("%d%*c%c%s",&new_ele.sid,&new_ele.gender,new_ele.sname);
			push(new_ele,&top,stack);
			break;
			case 2 :
			if(top == -1){
				printf("Stack is empty. \n");
				break;
			}
			pop_ele = pop(&top,stack);
			printf("The popped contents are : \n");
			printf("%d    %s    %c \n",pop_ele.sid,pop_ele.sname, pop_ele.gender );
			break;
			case 3 :
			if(top == -1){
				printf("Stack is empty. \n");
				break;
			}
			display(top,stack);
		    break;
			case 4 : 
			exit(0);
		}
	}
	return 0;
}
void display(int top, STD stack[])
{
	int i ;
	printf(" ID name gender \n");
	for(i=0;i<count;i++){
		printf("%d    %s    %c \n",stack[i].sid,stack[i].sname, stack[i].gender );
	}
	return;
}
void push(STD new, int *top, STD stack[]){
	stack[++(*top)]=new;
	count++;
	return;
}
STD pop(int *top, STD stack[]){
	STD popped_ele;
	popped_ele = stack[(*top)--];
	count--;
	return popped_ele;
	
}