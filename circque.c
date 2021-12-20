#include<stdio.h>
#define SIZE 100
int n ;
#include<stdlib.h>
void cq_insert(char ch , int *r, char cq[], int *count);
char cq_delete(int *f, char cq[], int *count);
void cq_display(int f ,int c , char cq[]);
int main()
{
 int ch;
 int f=0,r=-1,count=0;
 char cq[SIZE],ele;
 printf("Enter the size of the queue . \n");
 scanf("%d",&n);
 for(;;)
 {
  printf("\n Enter 1 to insert , 2 to delete , 3 to display and 4 to exit. \n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1 :
   if(count == n)
   {
     printf("The queue is full \n");
     break;
   }
   printf("Enter the element to be inserted \n ");
   scanf(" %c",&ele);
   cq_insert(ele,&r,cq,&count);
   break;
   case 2 :
   if (count == 0){
      printf("The queue is empty. \n");
      break;
      }
   printf("The deleted element from the queue is : %c .\n",cq_delete(&f,cq,&count));
   break;
   case 3 :
   cq_display(f,count,cq);
   break;
   case 4 : exit(0);
  }
 }
}
void cq_insert(char ch , int *r, char cq[], int *count)
{
  *r=(*r+1)%n;
  cq[*r]=ch;
  *count+=1;
  return;
}
char cq_delete(int *f, char cq[], int *count)
{
 char del_ele = cq[*f];
 *f=(*f+1)%n;
 *count-=1;\
 return del_ele;
}
void cq_display(int f,int c , char cq[])
{
int i;
 if (c ==0)
 {
  printf("The queue is empty. \n");
  return;
 }
 printf("The contents of the queue are : \n");
 for(i=1;i<=c;i++)
 {
  printf("%c ",cq[f]);
  f=(f+1)%n;
 }
 return;
}

















