#include<stdio.h>
void main()
{
	int a=20;
	char b='s';
	void *p;
	void *q;
	q=&b;
	p=&a;
	printf("%d\n",a);
	*(int *)p = 40 ;
	printf("%d\n",a);
	printf("%c\n",b);
	*(char *)q = 'b';
	printf("%c\n",b);
	printf("%p\n",q);
	printf("%p\n",p);
}

