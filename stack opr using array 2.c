//stack operations using array
#include<stdio.h>
int a[50],n,i,top=-1,ch,item;
void push();
void pop();
void display();
int main()
{
	printf("Enter the size of the array:");
	scanf("%d",&n);
	do
	{
		printf("\n1.push\n2.pop\n3.print\n4.exit");
		printf("\nEnter your choice:");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
			push();
			break;

			case 2:
			pop();
			break;

			case 3:
			display();
			break;

			case 4:
			break;

			default:
			printf("Invalid Choice");
		}
	}
	while(ch!=4);
	return 0;
}

void push()
{
	if(top==n-1)
	{
		printf("STACK OVERFLOW\n");
	}
	else
	{
		printf("Enter the value:");
		scanf("%d",&item);
		top=top+1;
		a[top]=item;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("STACK UNDERFLOW\n");
	}
	else
	{
		top=top-1;
	}
}
void display()
{
	if(top==-1)
	{
		printf("STACK UNDERFLOW\n");
	}
	else
	{
		printf("Stack elements are:");
		for(i=0;i<=top;i++)
		printf("%d ",a[i]);
	}
}
