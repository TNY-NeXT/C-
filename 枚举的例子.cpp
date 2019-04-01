# include <stdio.h>

//只是定义了一个数据类型，并没有定义变量，该数据类型的名字是enum WeekDay
enum WeekDay
{
	Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
}; //分号不要漏了

int main(void)
{
	//int day; //day定义成int类型不合适，因为范围太大了
	enum WeekDay day = Wednesday;
	printf("%d\n", day);

	//自己编写枚举的例子，应用到函数、电梯程序

	return 0;
}
