//add,multiply,display transpose of a matrix
#include<stdio.h>
int a[50][50],b[50][50],c[50][50],i,j,k,l,n,m,p,q,ch;
void add();
void multiply();
void transpose();
int main()
{
	//reading matrix 1
	printf("Enter the order of first matrix:");
	scanf("%d %d",&n,&m);
	printf("Enter the elements of the matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//printing matrix 1
	printf("Matrix 1 is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	//reading matrix 2
	printf("Enter the order of second matrix;");
	scanf("%d %d",&p,&q);
	printf("Enter the elements of the matrix:");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//printing matrix 2
	printf("Matrix 2 is:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	do
	{
	printf("\n1.Add\n2.Multiply\n3.Transpose\n4.Exit");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		add();
		break;

		case 2:
		multiply();
		break;

		case 3:
		transpose();
		break;

		case 4:
		break;

		default:
		printf("Invalid choice");
	}
	}while(ch!=4);
}

void add()
{
	printf("Sum of the matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void multiply()
{
	printf("Sum of the matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void transpose()
{
	printf("Transpose of the matrix 1 is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	printf("Transpose of the matrix 2 is:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ",b[j][i]);
		}
		printf("\n");
	}
}
