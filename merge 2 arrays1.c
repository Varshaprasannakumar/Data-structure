//merge two sorted arrays and add
#include<stdio.h>
int main()
{
	int a[50],b[50],c[50],i,n,m,temp,s;
	printf("Enter the size of first array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//printing first array
	printf("The first array is:",&a[i]);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	//printing the sorted first array
	printf("\nThe sorted first array is:");
	for(s=0;s<n;s++)
	{
		for(i=0;i<n-s-1;i++)
		{
			if(a[i]<a[i+1])
			{
				temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
			}
		}
		printf("%d ",a[i]);
	}
	//SECOND ARRAY SORTING
	printf("\nEnter the size of second array:");
	scanf("%d",&m);
	printf("Enter the elements of the array:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	//printing the second array
	printf("The second array is:",&b[i]);
	for(i=0;i<m;i++)
	{
		printf("%d ",b[i]);
	}
	//printing the sorted second array
	printf("\nThe sorted second array is:");
	for(s=0;s<m;s++)
	{
		for(i=0;i<m-s-1;i++)
		{
			if(b[i]<b[i+1])
			{
				temp=b[i+1];
				b[i+1]=b[i];
				b[i]=temp;
			}
		}
		printf("%d ",b[i]);
	}
	//merging the two arrays
	printf("\nAfter merging the array is:");
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<n+m;i++)
	{
		c[i+n]=b[i];
	}
	for(i=0;i<n+m;i++)
	{
		printf("%d ",c[i]);
	}

}

