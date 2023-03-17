//proto.c--使用函数原型
#include<stdio.h>
int imax(int n, int m);

int main(void)
{
	printf("The maximum of %d and %d is %d.\n",3, 5, imax(3, 5));
	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));

	return 0;
}

int imax(int n, int m)
{
	return (n > m ? n : m);
}

/*
The maximum of 3 and 5 is 5.
The maximum of 3 and 5 is 5.
*/

//虽然没有错误信息，double转换成int可能会导致丢失数据。
//函数原型的有点：它让编译器捕获在使用函数时可能出现的许多错误和疏漏。