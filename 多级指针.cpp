# include <stdio.h>

//多级指针是为了服务跨函数

void f(int ** q)
{
	//*q == p,存放的是p的地址
	**q = 20;
}

void g()
{
	int i = 10;
	int * p = &i;

	printf("%d\n", i);
	f(&p); //p 是 int * 类型，&p 是 int ** 类型
	printf("%d\n", i);
}

int main(void)
{
	g();

	return 0;
}
