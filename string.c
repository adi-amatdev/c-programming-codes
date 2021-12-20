#include<stdio.h>
#include<string.h>
void swap(char *, char *);
int main()
{
	int n,i,k;
	char str[100],str1[100];
	printf("Enter a string : \n");
	scanf("%s",str);
	n = strlen(str);
	strcpy(str1,str);
	for(i=0;i<(n/2);i++)
	{
			swap(&str[i],&str[n-i-1]);
	} 
	printf("The reversed string is : %s \n",str);
	k = strcmp(str1,str);
	if (k==0)
		printf("The entered string is a palindrome. \n");
    else 
	{
	  printf("The entered string is not a palindrome. \n");
	  
	}
	
		
	return 0;
}
void swap(char *s1, char *s2)
{
	char temp = *s1;
	*s1 = *s2;
	*s2 = temp;
	return;
}