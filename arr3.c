#include<stdio.h>
void main()
{
	int arr[5],sum=0,i;
	for(i=0;i<5;i++)
	{
		printf("Enter a value for arr[%d] : ",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("Sum = %d\n",sum);
}
