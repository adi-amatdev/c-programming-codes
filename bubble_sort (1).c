#include<stdio.h>
void main()
{ 
    int a[10],n, i, j,temp=0;
    
    printf("Enter the number of elements: ");
    scanf("%d",&n);                             
                          
    printf("Enter the Elements: ");
    for(i=0;i<n;i++)                              
		scanf("%d", &a[i]);        
	
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
    printf("Sorted array: "); 
	for(i=0;i<n;i++)                    
		printf("%d ",a[i]);
	printf("\n");
}