#include<stdio.h>
void main()
{
	char a = 's';
	short b = 2;
	int c = 5;
	float d = 5.9;
	double e = 6.9;
	long int f = 9;
	char *p = &a;
	short *q =&b;
	int *r=&c;
	float *s=&d;
	double *t=&e;
	long int *u=&f;
        printf("char: %c\n",*p);
	printf("short: %hd\n",*q);
	printf("int: %d\n",*r);
	printf("float: %f\n",*s);
	printf("Double: %lf\n",*t);
	printf("long int: %ld\n",*u);	
}
