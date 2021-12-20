#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct NODE *link;
}NODE;
int main()
{
 NODE *first;
 first = (NODE*)malloc(sizeof(NODE));
 first->data = 123;
 first->link = NULL;
 printf("%d \n",first->data);
 return 0;
}