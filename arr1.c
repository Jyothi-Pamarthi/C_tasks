#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,4,5};
	float sal[10]={10,20,30,40,50,100},s;
	int i,sum=0;
	scanf("%d",&arr[1]);
	printf("%f\n",sal[3]);
	arr[4]=25;
	printf("%d\n",arr[4]++);
	sal[5]+=200;
	printf("s=%f\n",sal[5]);
	sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
	printf("sum=%d\n",sum);
	i=2;
	scanf("%f",&sal[i]);
	printf("%f	%d\n",sal[i],i);
	printf("%f	%d\n",sal[i++],i);
	printf("%f\n",sal[3]);
}
