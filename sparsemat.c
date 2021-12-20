 #include<stdio.h>
 #define SIZE 100
typedef struct sparsemat
{
	int row;
	int col;
	int val;
	
}SPMT;
SPMT spm[SIZE];
int main()
{
	int nr,nc,nv=0,inmat[SIZE][SIZE],i,j;
	printf("Enter number of rows & columns \n");
	scanf("%d%d",&nr,&nc);
	printf("Enter the elements of the sparse matrix. \n");
	for(i=0;i<nr;i++)
		for (j=0;j<nc;j++)
			scanf ("%d",&inmat[i][j]);
	printf ("The contents of the matrix are : \n ");
	for(i=0;i<nr;i++)
	{
		printf("\n ");
		for (j=0;j<nc;j++)
		{
			printf (" %d ",inmat[i][j]);
		}
		printf(" \n");
	}
	spm[0].row = nr;
	spm[0].col = nc;
	for(i=0;i<nr;i++)
	{
		for (j=0;j<nc;j++)
		{
			if (inmat[i][j] == 0)
				continue;
			else
			{
				nv++;
				spm[nv].row = i;
				spm[nv].col = j;
				spm[nv].val = inmat[i][j];
			}				
				
			
		}
	}
	spm[0].val = nv;
	printf(" \n Implementation of of <row,col,val> representation. \n");
	printf("        row   col  val \n");
	for(i=0;i<=nv;i++)
		printf("spm[%d]    %d    %d    %d \n",i,spm[i].row,spm[i].col,spm[i].val);
}