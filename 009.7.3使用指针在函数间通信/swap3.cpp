/*swap3.c--ʹ��ָ������������������*/
#include<stdio.h>
void interchange(int* u, int* v);

int main(void)
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(&x, &y);	//�ѵ�ַ���͸�����
	printf("Now x = %d and y = %d.\n", x, y);


	return 0;
}

void interchange(int* u, int* v)//�β�������ָ�����͵ı���u��v
{
	int temp;

	temp = *u;		//temp��ȡu��ָ������ֵ
	*u = *v;
	*v = temp;

}

/*
Originally x = 5 and y = 10.
Now x = 10 and y = 5.
*/