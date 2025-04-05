#include<stdio.h>
struct student{
	int rnum;
	int class;
	int marks;
};
int main(void)
{
	struct student Jyothi;
	Jyothi.marks = 75;
	Jyothi.rnum =5;
	Jyothi.class=8;
	printf("Roll number = %d\n",Jyothi.rnum);
	printf("Class = %d\n",Jyothi.class);
	printf("Marks = %d\n",Jyothi.marks);

}

