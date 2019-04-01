/*
通过函数完成对结构体变量的输入和输出
*/

# include <stdio.h>
# include <string.h>

void InputStudent(struct Student *);
void OutputStudent(struct Student *);;

struct Student
{
	int age;
	char sex;
	char name[100];
}; //分号不能省

int main(void)
{
	struct Student st;

	InputStudent(&st); //对结构体变量输入
	OutputStudent(&st); //对结构体变量输出

	return 0;
}

void InputStudent(struct Student * pstu)
{
	pstu->age = 20;
	pstu->sex = 'F';
	strcpy(pstu->name, "燕活");
}

void OutputStudent(struct Student * pst)
{
	printf("%d %c %s\n", pst->age, pst->sex, pst->name);
}
