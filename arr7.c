#include<stdio.h>
void main()
{
	int arr[15],i,j,num;
	printf("Enter a decimal number : ");
	scanf("%d",&num);
	while(num>0)
	{
		arr[i]=num%2;
		num/=2;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);
	}
	printf("\n");
}
