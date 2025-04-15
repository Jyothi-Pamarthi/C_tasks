#include<stdio.h>
void main()
{
	int x,y,temp;
	int *p,*q;
	p=&x;
	q=&y;
	printf("Enter two integer values : ");
	scanf("%d %d",&x,&y);
	temp=*p;
	*p=*q;
	*q=temp;
	printf("After swapping : %d %d\n",*p,*q);
}
