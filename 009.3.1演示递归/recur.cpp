/*recur.c--递归演示*/
#include<stdio.h>
void up_and_down(int);

int main(void)
{
	up_and_down(1);
	

	return 0;
}
//递归使用
void up_and_down(int n)
{
	printf("Level %d: n location %p\n", n, &n);	//#1
	if (n < 4)
	{
		up_and_down(n + 1);						//自己调用自己
	}
	printf("LEVEL %d: n location %p\n", n, &n);	//#2

}

/*
Level 1: n location 000000A5C63EF8C0
Level 2: n location 000000A5C63EF7C0
Level 3: n location 000000A5C63EF6C0
Level 4: n location 000000A5C63EF5C0
LEVEL 4: n location 000000A5C63EF5C0			//条件不成立执行后面的句子
LEVEL 3: n location 000000A5C63EF6C0			//调用完自己之后收到n = 3时返回值
LEVEL 2: n location 000000A5C63EF7C0			
*/
