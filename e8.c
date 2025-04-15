#include<stdio.h>
struct integer{
	int a;
	int b;
	int *p;
	int *q;
};
int main()
{
	struct integer values;
 //       int a,b;
//	int *p,*q;
	values.p=&values.a;
	values.q=&values.b;
	printf("Enter two integers : ");
	scanf("%d %d",&values.a,&values.b);
	printf("a value : %d\n",*values.p);
	printf("b value : %d\n",*values.q);
}

