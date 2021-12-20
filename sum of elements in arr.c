#include<stdio.h>
float sum(float arr[], int n);
int main()
{
    int n,i;
    float arr[100];
    printf("Enter size of the array: \n");
    scanf("%d",&n);
    printf("Enter elements  of the array: \n");
     for(i=0;i<n;i++)
       scanf("%f",&arr[i]);
    printf("Elements of the array are: \n");
     for(i=0;i<n;i++)
          printf("%.3f",arr[i]);
    printf("\n Sum of the elements of the array is = %.3f \n", sum(arr,n));
    return 0;
}
float sum(float arr[], int n)
{
    int i;
    float sum=0;
     for(i=0;i<n;i++)
     sum+=arr[i];
     return sum;
    
}