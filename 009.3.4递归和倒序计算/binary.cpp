/*binary.c--以二进制形式打印整数*/
#include<stdio.h>
void to_binary(unsigned long n);

int main(void)
{
	unsigned long number;
	printf("Enter an integer (q to quit):\n");
	while (scanf_s("%lu", &number) == 1)
	{
		printf("Binary equivalent: ");
		to_binary(number);
		putchar('\n');
		printf("Enter an integer (q to quit):\n");
	}
	printf("Done.\n");


	return 0;
}

void to_binary(unsigned long n)
{
	int r;			

	r = n % 2;
	if (n >= 2)
	{
		to_binary(n / 2);
	}
	putchar(r == 0 ? '0' : '1');

	return;
}

/*
Enter an integer (q to quit):
5
Binary equivalent: 101
Enter an integer (q to quit):
8
Binary equivalent: 1000
Enter an integer (q to quit):
202
Binary equivalent: 11001010
Enter an integer (q to quit):
q
Done.
*/