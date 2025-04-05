#include<stdio.h>
struct student{
	int rnum;
	int class;
	int marks;
};
int main()
{
	struct student STD = {5,8,75};
	printf("Roll number : %d\n",STD.rnum);    //o/p : Rollnunber : 5
	printf("Class : %d\n",STD.class);         //      Class : 8
	printf("Marks : %d\n",STD.marks);         //      Marks :75
}
