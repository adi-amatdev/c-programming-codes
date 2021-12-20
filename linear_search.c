#include <stdio.h>
void read_array(int a, int arr[]);
void print_array(int a, int arr[]);
int linear_search(int n, int arr[], int key);
#define size 100
int main()
{
    int n , arr[size],key,index;
    printf("Enter size of the array : \n");
    scanf("%d",&n);
    printf("Enter arrray of elements: \n");
    read_array(n,arr);
    printf("Elements of the array are  : \n");
    print_array(n,arr);
    printf("\n Enter key element of the array : \n");
    scanf("%d",&key);
    index = linear_search(n,arr,key);
    if (index == -1)
     printf("Key not found. \n");
    else
     printf("Key is present at %d index. \n",index);
    return 0;
}
void read_array(int n, int arr[])
{
    int i;
    for (i=0;i<n;i++)
     scanf("%d",&arr[i]);
    return;
}
void print_array(int n, int arr[])
{
    int i;
    for (i=0;i<n;i++)
     printf("%d ",arr[i]);
    return;
}
int linear_search(int n, int arr[], int key)
{
    int i;
    for (i=0;i<n;i++)
     if (arr[i] == key)
      return i;
    return -1;
}








