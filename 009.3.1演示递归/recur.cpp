/*recur.c--�ݹ���ʾ*/
#include<stdio.h>
void up_and_down(int);

int main(void)
{
	up_and_down(1);
	

	return 0;
}
//�ݹ�ʹ��
void up_and_down(int n)
{
	printf("Level %d: n location %p\n", n, &n);	//#1
	if (n < 4)
	{
		up_and_down(n + 1);						//�Լ������Լ�
	}
	printf("LEVEL %d: n location %p\n", n, &n);	//#2

}

/*
Level 1: n location 000000A5C63EF8C0
Level 2: n location 000000A5C63EF7C0
Level 3: n location 000000A5C63EF6C0
Level 4: n location 000000A5C63EF5C0
LEVEL 4: n location 000000A5C63EF5C0			//����������ִ�к���ľ���
LEVEL 3: n location 000000A5C63EF6C0			//�������Լ�֮���յ�n = 3ʱ����ֵ
LEVEL 2: n location 000000A5C63EF7C0			
*/
