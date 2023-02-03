#include <stdio.h>
void main()
{
	int a[5];
	int i,j,max,min,a1=0,sum=0;
	printf("Enter 5 Numbers : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	max=0;
	min=sum;
	for(i=0;i<5;i++)
	{
		sum=0;
		for(j=0;j<5;j++)
		{
			if(j!=a1)
				sum+=a[j];
			else
				continue;
		}
		if(sum>max)
			max=sum;
		if(sum<min)	
			min=sum;
		a1++;
	}
	printf("%d\t%d",min,max);
}


