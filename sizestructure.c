#include<stdio.h>
struct student{
	int a;
	int b;
	char c;
//	int d;
};
int main(void)
{
	struct student STD;
	printf("Size of a : %lu\n",sizeof(STD.a));
	printf("Size of b : %lu\n",sizeof(STD.b));
	printf("Size of c : %lu\n",sizeof(STD.c));
//	printf("Size of d : %lu\n",sizeof(STD.d));
	printf("Size of structure : %lu\n",sizeof(STD));
	printf("Address of a : %p\n",&STD.a);
	printf("Address of b : %p\n",&STD.b);
	printf("Address of c : %p\n",&STD.c);
//	printf("Address of d : %p\n",&STD.d);
	printf("Address of structure : %p\n",&STD);

}
