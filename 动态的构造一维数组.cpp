# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int a[5]; //如果int占4个字节的话，则本数组总共占20个字节，每四个字节当做一个int变量来使用
	int len;
	int * pArr; //这里为什么定义指针的数据类型呢？因为数组名的含义是：存放了数组的第一个元素的地址，是地址
				//所以数组名指向前四个字节，定义的是指针变量
	int i;

	printf("请输入你要存放的元素个数：");
	scanf("%d", &len);
	pArr = (int *)malloc(4 * len); //pArr是数组名，存放的是第一个元素的地址，
						//pArr指向的是前4个字节，*pArr == 前4个字节的内容
						//pArr+1指向后四个字节,*(pArr+1) == 后4个字节的内容
						//pArr[0] == *pArr;pArr[1] == *(pArr+1);
	/*
	上面所有注释得出的一句话是：
	pArr = (int *)malloc(4 * len) == int pArr[len];
	*/

	
	//对一维数组进行操作
	printf("请对每一个元素赋值：\n");
	for (i=0; i<len; ++i)
		scanf("%d", &pArr[i]);

	//对一维数组进行输出
	for (i=0; i<len; ++i)
		printf("%d\n", pArr[i]);



	return 0;
}
