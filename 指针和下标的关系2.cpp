# include <stdio.h>

void f(int * pArr, int len) //定义指针变量名一般用p/q开头
{
	//pArr[3] = 88;
	//*(pArr+3) = 88;
}

int main(void)
{
	int a[6] = {1,2,3,4,5,6};

	printf("%d\n", a[3]);
	f(a, 6);
	printf("%d\n", a[3]);

	return 0;
}
/*
数组名a是一个指针变量，它存放的是数组的第一个元素的地址，；
所以形参定义的是 int * 的数据类型 ，在传参的时候，传递的是a；
由于a和pArr指向的都是同一个地址，所以可以通过
	//pArr[3] = 88;
	//*(pArr+3) = 88;
的方式来更改数组中某一个元素的值。
*/
