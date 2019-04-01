# include <stdio.h>

int main(void)
{

	int a[3][4] = {
		{7, 8, 10, 77},
		{29, 19, 43, 55},
		{23, 655, 47, 99}
	};
	 int i, j, h, m, n;
	 int b = 0;

	for (i=0;i<3;++i)
	{
		for (j=0;j<4;++j)
		{
			h = a[i][j];
			if (b < h)
			{
				b = h;
				m = i+1;
				n = j+1;
			}

		}
	}
	printf("b = %d, m = %d, n = %d\n", b, m, n);
	

	



	return 0;
}
