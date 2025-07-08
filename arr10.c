#include<stdio.h>
int add(int arr[],int n);
void main()
{
	int a[3]={1,2,3};
	int b[4]={10,10,10,10};
	int c[5]={10,10,10,10,10};
	printf("Sum of elements of array a : %d\n",add(a,3));
	printf("Sum of elements of array b : %d\n",add(b,4));
	printf("Sum of elements of array c : %d\n",add(c,5));
}
int add(int arr[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}


