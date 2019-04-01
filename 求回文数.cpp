# include <stdio.h>

int main(void)
{
	int val; //存放待判断的数字
	int sum = 0;
	int m;
		
	printf("请输入你需要判断的数字： ");
	scanf("%d", &val);

	m = val;
	while (m)
	{
		sum = sum * 10 + m%10;
		m /= 10;
	}

	if (sum == val)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
