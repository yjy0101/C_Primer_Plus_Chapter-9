//factor.c--ʹ��ѭ���͵ݹ����׳�

//һ�����ѡ��ѭ���ȽϺ�

#include<stdio.h>
long fact(int n);
long rfact(int n);
int main(void)
{
	int num;

	printf("This program calculates factorials.\n");
	printf("Enter a value in the range 0-12 (q to quit):\n");
	while (scanf_s("%d",&num) == 1)
	{
		if (num < 0)
		{
			printf("No negative numbers, please.\n");
		}
		else if (num > 12)
		{
			printf("Keep input under 13.\n");
		}
		else
		{
			printf("loop: %d factorial = %ld\n", num, fact(num));
			printf("recursion: %d factorial = %ld\n", num, rfact(num));

		}
		printf("Enter a value in the range 0-12 (q to quit):\n");
	}
	printf("Bye.\n");

	return 0;
}

long fact(int n)		//ʹ��ѭ���ĺ���
{
	long ans;

	for (ans = 1; n > 1; n--)
	{
		ans *= n;
	}
	return ans;

}						

long rfact(int n)		//ʹ�õݹ�ĺ���
{
	long ans;

	if (n > 0)			//�ݹ���˳�������ֹͣ����
	{
		ans = n * rfact(n - 1);		//3!==3*2!==3*2*1!==3*2*1
	}
	else
	{
		ans = 1;
	}
	return ans;
}

/*
This program calculates factorials.
Enter a value in the range 0-12 (q to quit):
3
loop: 3 factorial = 6
recursion: 3 factorial = 6
Enter a value in the range 0-12 (q to quit):
20
Keep input under 13.
Enter a value in the range 0-12 (q to quit):
10
loop: 10 factorial = 3628800
recursion: 10 factorial = 3628800
Enter a value in the range 0-12 (q to quit):
q
Bye.
*/