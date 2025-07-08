#include<stdio.h>
void main()
{
	int arr[5],i,s,l;
	for(i=0;i<5;i++)
	{
		printf("Enter a value for arr[%d] = ",i);
		scanf("%d",&arr[i]);
		s=arr[0];
		l=arr[0];
		if(arr[i]<s)
			s=arr[i];
		if(arr[i>l])
			l=arr[i];
	}
	printf("Large = %d\n",l);
	printf("Small = %d\n",s);
}

