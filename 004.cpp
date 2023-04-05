#include<stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
//	printf("%d",a[2][3]);
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=2;j++)
		{
			printf("a[%d][%d]=%d\n",i,j,a[i][j]);
		}
	}
	return 0;
}
