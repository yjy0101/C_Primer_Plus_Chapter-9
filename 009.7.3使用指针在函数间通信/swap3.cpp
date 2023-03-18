/*swap3.c--使用指针解决交换函数的问题*/
#include<stdio.h>
void interchange(int* u, int* v);

int main(void)
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(&x, &y);	//把地址发送给函数
	printf("Now x = %d and y = %d.\n", x, y);


	return 0;
}

void interchange(int* u, int* v)//形参是两个指针类型的变量u和v
{
	int temp;

	temp = *u;		//temp获取u所指向对象的值
	*u = *v;
	*v = temp;

}

/*
Originally x = 5 and y = 10.
Now x = 10 and y = 5.
*/