#define MAX_SIZE 100
#include<stdio.h>
#include<stdlib.h>
void insert_ele(int ele , int *en, int queue[]);
int delete_ele(int *fr , int queue[]);
void display_queue(int fr , int en , int queue[]);
int main()
{
	int n,ch,fr= 0,en= -1,ele, queue[MAX_SIZE];
	printf("enter the size of the queue : \n");
	scanf("%d",&n);
	for(;;)
	{
		printf("\n Enter 1 to insert  \n\
		           Enter 2 to delete \n\
		           Enter 3 to display \n\
		           Enter 4 to exit . \n");
		scanf ("%d",&ch);
		switch (ch)
		{
			case 1 : 
            if (en == (n-1))
            {
              printf("Queue is full. \n");
			  break;
            }
			printf("Enter the element to be inserted : \n");
			scanf("%d",&ele);
			insert_ele(ele , &en, queue);
			break;
			case 2 :
			if(fr > en)
			{
				printf ("Queue is empty. \n");
				break;
			}
			printf("The deleted element from the queue is : %d  \n",delete_ele(&fr , queue));
			break;
			case 3 :
			display_queue( fr , en , queue);
			break;
			case 4 :
			exit(0);
		}
	}
}
void insert_ele(int ele , int *en, int queue[]){
	queue[++(*en)]= ele;
	return;
}
int delete_ele(int *fr , int queue[])
{
	return (queue[(*fr)++]);
}
void display_queue(int fr , int en , int queue[])
{
	int i;
	if (!(fr > en))
	{
     printf("The contents of the queue is :")
	
	 for(i=fr;i<=en;i++)
	 {
	 	printf ("%d ",queue[i]);
	 }
	return;
	}
	else 
	{
		printf ("\n Queue is empty , no elements to display. \n");
		return;
	}
}

