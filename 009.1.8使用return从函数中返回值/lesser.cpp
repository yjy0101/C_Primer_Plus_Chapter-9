/*lesser.c--找出两个整数中比较小的一个*/
#include<stdio.h>
int imin(int n, int m);

int main(void)
{
	int evil1, evil2;

	printf("Enter a pair of integers (q to quit):\n");
	while (scanf_s("%d %d",&evil1, &evil2) == 2)
	{
		printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
		printf("Enter a pair of integers (q to quit):\n");
	}
	printf("Bye.\n");

	return 0;
}

int imin(int n, int m)
{
	int min;

	if (n < m)
	{
		min = n;
	}
	else
	{
		min = m;
	}

	return min;
}

/*
Enter a pair of integers (q to quit):
233 666
The lesser of 233 and 666 is 233.
Enter a pair of integers (q to quit):
-3 90
The lesser of -3 and 90 is -3.
Enter a pair of integers (q to quit):
q
Bye.
*/