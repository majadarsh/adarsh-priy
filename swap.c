#include<stdio.h>
void swap(int i,int j)
{
	int k;
	k=i;
	i=j;
	j=k;
	printf("the swapped numnber is:%d %d",i,j);
}

void main()
{
	
	int i,j;
	printf("Enter the number to swap the number: \n");
	scanf("%d%d",&i,&j);
	swap(i,j);
}
