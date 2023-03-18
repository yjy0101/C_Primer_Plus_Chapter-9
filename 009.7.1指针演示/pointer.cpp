#include<stdio.h>
int main(void)
{
	int num1 = 6;


	/*
			1.通过&取到了num在内存中的地址；
			2.为了能保存num的地址，使用一个变量p来进行保存；
			3.这个保存地址的变量类型，我们称为指针变量类型；
			4.int* 理解为一种新的变量类型。
	*/
	int* p = &num1;

	*p = 9;	//* 是一个指针运算符		*p就等价于所指向的对象num

	printf("变量num1的值：%d, 指针变量p的值：%p\n", *p, p);


	return 0;
}

/*
变量num1的值：9, 指针变量p的值：000000304CD8FA94
*/