#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("Enter two integer values : ");
	scanf("%d %d",&x,&y);
	temp=x;
	x=y;
	y=temp;
	printf("After swapping x and y : %d %d\n",x,y);
}
