#include<stdio.h>
#define SIZE 10
void main()
{
	int arr[SIZE],even=0,odd=0,i;
	for(i=0;i<SIZE;i++)
	{
		printf("Enter a value for arr[%d] : ",i);
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			even++;
		}
		else
			odd++;
	}
	printf("Even = %d	odd = %d\n",even,odd);
}
