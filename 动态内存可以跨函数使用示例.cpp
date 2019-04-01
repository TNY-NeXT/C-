# include <stdio.h>
# include <malloc.h>

void f(int ** q)
{
	*q = (int *)malloc(sizeof(int)); //sizeof返回值是该数据类型所占的字节数
								//sizeof(int)有利于程序的移植
								// *q == p; q存放的是p的地址
								//左边这个变量一定是个指针变量：*q 
	**q = 50;
}

int main(void)
{
	int * p;

	f(&p);
	printf("%d\n", *p);

	return 0;
}
