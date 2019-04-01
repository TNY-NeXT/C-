# include <stdio.h>

void f(int ** q)
{
	int i = 5;
	//*q == p q和**q都不等价于p
	//*q = i; //error 因为*q = i; 等价于 p = i; 所以错误
	*q = &i;
}

int main(void)
{
	int * p;

	f(&p);
	printf("%d\n", *p); 

	return 0;
}
/*
16行有错
因为这个程序语法上没有问题，但逻辑上是错误的
因为当f()函数运行完毕后，静态变量i的空间已经被释放掉了。
再读这块内存会导致内存越界。（只有指针会出现这个问题）

  总结：
	静态变量不能跨函数使用
*/
