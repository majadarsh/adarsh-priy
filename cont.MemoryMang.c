#include<stdio.h>
#include<unistd.h>

void main()
{

int p,n,i,a[10]={0},bs=0,remain=10,occ=0,temp=0;

printf("Total free space is: %d\n",remain);

while(1)
{
printf("\n\nEnter the choice : \n 1.Enter process\n 2.exit\n");
scanf("%d",&n);

switch(n)
{
case 1:

printf("\nEnter the process number : \n");
scanf("%d",&p);
printf("Enter the block size :\n");
scanf("%d",&bs);

if(bs<=remain)
{
remain=remain-bs;

for(i=temp;i<(temp+bs);i++)
{
a[i]=p;
}
temp+=bs;

printf("Total free space is : %d\n",remain);

for(i=0;i<10;i++)
{
printf("[ %d ]",a[i]);
}

}
else
printf("no free space - not permitted\n");
break;
case 2:exit(1);
break;
default:printf("Enter the coorect options \n");
}
}

}
