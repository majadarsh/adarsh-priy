//factorial
#include<stdio.h>
void main()
{
	//here no is the number to find the factorial.
	//temp is used to get the number 1 less than the number
	//fact is used to calculating the factorial and initialized to 1.
	int no,temp,fact=1;
	printf("Enter the number to find the factorial of the number:\n");
	scanf("%d",&no);
	temp=no;
	while(temp>0)
	{
		//formulae for calculating the factorial.
		fact=fact*(temp);
		temp--;
	}
	
	printf("The factorial of number %d is :%d",no,fact);
}
