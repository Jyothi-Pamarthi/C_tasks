#include<stdio.h>
void main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter a value for arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Array elements are :\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");

}
