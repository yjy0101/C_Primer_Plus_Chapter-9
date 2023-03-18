/*loccheck.c--查看变量被储存在何处*/
#include<stdio.h>
void mikado(int);
int main(void)
{
	int pooh = 2, bah = 5;//main()的局部变量

	printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);	//%p 是输出地址的转换说明
	printf("In main(),  bah = %d and  &bah = %p\n", bah, &bah);
	mikado(pooh);

	return 0;
}

void mikado(int bah)
{
	int pooh = 10;//mikado()的局部变量

	printf("In mikado(), pooh = %3d  and &pooh = %p\n", pooh, &pooh);
	printf("In mikado(),  bah = %3d  and  &bah = %p\n", bah, &bah);
}

/*
In main(), pooh = 2 and &pooh = 00000069CD2FF9C4
In main(),  bah = 5 and  &bah = 00000069CD2FF9E4
In mikado(), pooh =  10  and &pooh = 00000069CD2FF8A4
In mikado(),  bah =   2  and  &bah = 00000069CD2FF9A0
*/