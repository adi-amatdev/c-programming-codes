#include <stdio.h>
#include<stdlib.h>
int main()
{
   int *ptr,n=10,i,new_size;
   ptr = (int*)calloc(n,sizeof(int));
   if(ptr == NULL)
    {
        printf("No memory available. \n");
        return 0;
    
    }
    printf("Enter elements : \n");
    for (i=0;i<n;i++)
     scanf("%d ",(ptr+i));
    printf("Enter new elemet size ");
    scanf ("%d",&new_size);
    ptr=(int*)realloc(ptr,(n+new_size)*sizeof(int));
    printf("enter new element .");
    for (i=n;i<n+new_size;i++)
     scanf("%d ",(ptr+i));

    return 0;
}