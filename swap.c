#include<stdio.h>
void swap(int i,int j)
{
	int p;
	p=i;
	i=j;
	j=p;
	printf("the swapped numnber is:%d %d",i,j);
}

void main()
{
	
	int i,j;
	printf("Enter the number to swap the number: \n");
	scanf("%d%d",&i,&j);
	swap(i,j);
}
