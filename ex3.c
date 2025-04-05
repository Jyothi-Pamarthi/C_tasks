#include<stdio.h>
struct student{
        int rnum;
        int class;
        int marks;
};
int main()
{
        struct student STD;
	typedef STD Jyothi;
	Jyothi.rnum=14;
	Jyothi.class=9;
	Jyothi.marks=70;
        printf("Roll number : %d\n",Jyothi.rnum);    
        printf("Class : %d\n",Jyothi.class);         
        printf("Marks : %d\n",Jyothi.marks);	
}
