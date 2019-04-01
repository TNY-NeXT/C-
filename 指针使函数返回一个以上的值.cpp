//指针变量可以返回一个以上的值

# include <stdio.h>

void g(int * p, int * q)
{
	*p = 1;
	*q = 2;
}

int main(void)
{
	int a = 3;
	int b = 5;

	g(&a, &b);
	printf("a = %d, b= %d\n", a, b);

	return 0;
}
