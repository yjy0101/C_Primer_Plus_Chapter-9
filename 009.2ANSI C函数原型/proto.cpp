//proto.c--ʹ�ú���ԭ��
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

//��Ȼû�д�����Ϣ��doubleת����int���ܻᵼ�¶�ʧ���ݡ�
//����ԭ�͵��е㣺���ñ�����������ʹ�ú���ʱ���ܳ��ֵ����������©��