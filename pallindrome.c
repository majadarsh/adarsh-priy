//pallindrome
#include<stdio.h>
void main()
{
	// here no is the number to find the palliindrome
	// temp is the variable to find the reverse of the number.
	int i,no,temp=0;
	printf("Enter the number to find pallindrome or not:\n");
	scanf("%d",&no);
	i=no;
	//checking whether when i divisible by 10 is greter than 0 or not.
	while(i>0)
	{
		temp=(temp*10)+(i%10);
		i=i/10;
	}
	//printing the reverse string.
	printf("The reverse number is :%d\n",temp);
	//checking the pallindrome condition.
	if(temp==no)
	{
		printf("The number is pallindrome as %d = %d.\n",temp,no);
	}
	else
	{
		printf("The number is not a pallindrome as %d != %d .\n",no,temp);
	}
}
