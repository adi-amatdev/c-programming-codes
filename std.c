#include <stdio.h>
#include<stdlib.h>
#define size 25
struct student 
{
	char name[20];
	int age ;
	float marks;
	char sub_name[20];
};
int main()
{
   struct student std[size];
   int n,i;
   printf ("How many students? \n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	   printf("Reading for %d student \n",i+1);
	   scanf("%s %d %f %s",std[i].name,&std[i],&std[i].marks,std[i].sub_name);
	   
   }
   printf("The details are : \n");
   for(i=0;i<n;i++)
   {
	   printf("printing  for %d student \n",i+1);
	   printf("%s %d %f %s",std[i].name,&std[i],&std[i].marks,std[i].sub_name);
   }
    return 0;
}