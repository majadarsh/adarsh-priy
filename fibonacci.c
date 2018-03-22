#include<stdio.h>
void main()
{
	// here (// means) -comments
	//x and y are first number of fibonacci series and assignning them values as 0 and 1 manually.
	// sum gives rest of the series number .
	// n is the number of pallindrome number to find (userdriven program).
	int i,x,n,y,sum;
	x=0;y=1;
	printf("Enter the number of fibonacci number:\n");
	scanf("%d",&n);
	// printing the first two numbers
	printf("%d\t%d\t",x,y);
	for(i=1;i<n-1;i++)
	{
		//printing the rest of the numbers
		sum=x+y;
		printf("%d\t",sum);
		// reversing second number as new value of x and lly third number(i.e here sum) as new value of y.
		x=y;
		y=sum;
	}
}
