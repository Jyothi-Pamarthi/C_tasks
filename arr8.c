#include<stdio.h>
void func(int n);
void main()
{
	int arr[8],i;
	for(i=0;i<8;i++)
	{
		scanf("%d",&arr[i]);
//		func(arr[i]);
	}
	for(i=0;i<8;i++)
		func(arr[i]);
}
void func(int n)
{
	if(n%2==0)
	{
		printf("%d is a even number\n",n);
	}
	else
		printf("%d is a odd number\n",n);
}
