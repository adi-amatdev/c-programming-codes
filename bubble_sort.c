#include<stdio.h>
void main()
{ 
    int n,a[n],i,j,k,temp=0,choice;
    char exit[1];
    
    printf("number of items in list : ");
    scanf("%d",&n);                             
                          
    printf("enter the number in the list\n");
    for(i=0;i<n;i++)                              
		scanf("%d",&a[i]);        
	
	for(j=0;j<n-1;j++)  
	{ 
	
	for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
        } 
         
    }
   
	}
    
	for(i=0;i<n;i++)                    
		printf("%d ",a[i]);    
}