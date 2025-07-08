#include<stdio.h>
void sum(int val[]);
void main(){
	int arr[6]={1,2,3,4,5,6},i;
	sum(arr);
	for(i=0;i<6;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void sum(int val[])
{
	int sum=0,i;
	for(i=0;i<6;i++)
	{
		val[i]=val[i]*val[i];
		sum+=val[i];
	}
	printf("Sum = %d\n",sum);
}

