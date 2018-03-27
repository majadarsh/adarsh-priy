#include<stdio.h>
void main()
{
	int n,i,k=0,j,TQ=4,BTSUM=0,count=0,sum=0;
	int PNO[50],BT[50]={-1},GC[50],AT[50]={0};
	printf("Enter the no of process for scheduling:\n");
	scanf("%d",&n);
	
	printf("Enter the Process in the queue :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&PNO[i]);
	}
	
	printf("Enter the Burst Time in the queue :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&BT[i]);
		BTSUM=BTSUM+BT[i];
	}
	
	printf("The Sum of Burst Time is :%d\n",BTSUM);
	
	while(1)
	{
		if(BTSUM>0)
		{
			BTSUM=0;
			for(i=0;i<n;i++)
			{
				if(TQ>=BT[i])
				{
					sum=sum+BT[i];
					AT[i]=sum;
					BT[i]=0;
					BTSUM=BTSUM+BT[i];
					GC[i]=PNO[i];
					count++;
				}
				else
				{
					sum=sum+TQ;
					AT[i]=sum;
					BT[i]=BT[i]-TQ;
					BTSUM=BTSUM+BT[i];
					GC[i]=PNO[i];
					count++;
				}
			}
		}
		else
		break;
	}
	
	printf("The Gantt Chart for the Round Robin Schedule is :\n");
	
	for(j=0;j<count;j++)
	{
		printf("%d\t%d\n",GC[j],AT[j]);
	}
}
