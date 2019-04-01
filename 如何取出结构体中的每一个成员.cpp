# include <stdio.h>

struct Student //这只是定义了一个新的数据类型，并没有定义变量
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct Student st = {80, 66.6F, 'F'}; //这里定义的st只是一个普通变量
	struct Student * pst = &st; //&st不能改成st，这里的pst才是指针变量

	pst->age = 88; //第二种方式,常用
	st.score = 66.6f; //第一种方式
	printf("%d %f\n", st.age, pst->score);

	return 0;
}
//pst->age 在计算机内部会被转化成 (*pst).age，因为 *pst == st,
//所以(*pst).age == st.age，这是->的含义，一种硬性规定
//所以 pst->age 等价于 (*pst).age 也等价于 st.age
