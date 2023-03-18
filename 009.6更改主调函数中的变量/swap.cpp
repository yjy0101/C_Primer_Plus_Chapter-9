#include<stdio.h>
void interchange(int u, int v);

int main(void)
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(x, y);
	printf("Now x = %d and y = %d.\n", x, y);


	return 0;
}

void interchange(int u, int v)
{
	int temp;

	printf("Originally u = %d and v = %d.\n", u, v);
	temp = u;
	u = v;
	v = temp;
	printf("Now u = %d and v = %d.\n", u, v);

}

/*
Originally x = 5 and y = 10.
Originally u = 5 and v = 10.
Now u = 10 and v = 5.
Now x = 5 and y = 10.
*/

//变量交换还是需要指针