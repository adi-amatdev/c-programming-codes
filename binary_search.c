#include <stdio.h>
int main()
{
   int i, first, last, middle, n, search, array[100];
   
   printf("Enter the number of Elements: ");
   scanf("%d",&n); 
   printf("Enter %d integers: ", n);
   
   for (i = 0; i < n; i++)
	scanf("%d",&array[i]); 
   
   printf("Enter the value to be found: ");
   scanf("%d", &search);
   
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
   
   while (first <= last) 
   {
      if (array[middle] < search)
		first = middle + 1;    
      
	  else if (array[middle] == search) 
	  
	  {
         printf("%d is present at position %d.\n", search, middle+1);
         break;
      }
      
	  else
		last = middle - 1;
      middle = (first + last)/2;
   }
   
   if (first > last)
      printf("%d is not present in the list.\n", search);
   return 0;  
}