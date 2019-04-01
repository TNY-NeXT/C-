# include <stdio.h>

int main(void)
{
	int * p;
	int i = 5;

	*p = i; //p需先指向一个变量的地址，才能得到这个等价。这里的p是有指向的，但是它指向的是一个垃圾值单元的地址
			//这里错误表示：把i赋值给你所不知道的单元
	printf("%d\n", *p);

	return 0;
}
