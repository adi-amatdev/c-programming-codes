#include<stdio.h>
#include<stdlib.h>
int avail=0;
#define maxterms 100
 void polyadd(int sa,int fa,int sb,int fb,int *sd,int *fd);
 int  compare (int a ,int b);
 void attach(float coef, int expon);
 

struct polyn
{
	float coef;
	int exp;
};
struct polyn poly[maxterms];
int main ()
{
	int sa=0,fa,na,sb,fb,nb,sd,fd,i;
	printf("Enter the number of terms for the first polynomial\n");
	scanf ("%d",&na);
	printf("\n Enter the coefficent and exponent of the terms: \n");
	for (i=0;i<na;i++)
		scanf("%f%d",&poly[i].coef,&poly[i].exp);
	fa = na-1;
	sb = na;
	printf("Enter the number of terms for the 2nd polynomial\n");
	scanf ("%d",&nb);
	printf("Enter the coefficent and exponent of the terms: \n");
	for (i=sb;i<(na+nb);i++)
		scanf("%f%d",&poly[i].coef,&poly[i].exp);
	fb=(na+nb)-1;
	fd=0;
	avail= na+nb;
	polyadd(sa,fa,sb,fb,&sd,&fd); //func call
	printf ("sum is : \n");
	for (i=sd;i<=fd;i++)
		printf("%.3f*x^%d+ ",poly[i].coef,poly[i].exp);
	return 0;
}
 int  compare (int a ,int b)
 {
	 if (a<b)
		 return -1;
	 else if (a=b)
		 return 0;
	 else 
		 return 1;
 }
 void attach(float coef, int expon)
 {
	 poly[avail].coef=coef;
	 poly[avail].exp=expon;
	 avail++;
	 
 }
 void polyadd(int sa,int fa,int sb,int fb,int *sd,int *fd)
 {
	 float  coef=0;
	 *sd = avail;
	 while (sa<=fa && sb<=fb)
	 {
		 switch(compare(poly[sa].exp,poly[sb].exp))
		 {
			 case -1:
			 attach(poly[sb].coef,poly[sb].exp);
			 sb++;
			 break;
			 case 1 :
			 attach(poly[sa].coef,poly[sa].exp);
			 sa++;
			 break;
			 case 0 :
			 coef= poly[sa].coef + poly[sb].coef;
			 if(coef)
			 {
				  attach(coef, poly[sa].exp);
			 }
			 sa++;
			 sb++;
			 break;
			 
		 }
		 
	 }
	 for (;sa<=fa;sa++)
		 attach(poly[sa].coef,poly[sa].exp);
	 for (;sb<=fb;sb++)
		 attach(poly[sb].coef,poly[sb].exp);
	 *fd = avail-1;
 }