#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3], i, j;
	printf("Enter the 3*3 matrix:\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Display the matrix:\n");
	for(i = 0; i < 3; i++)
	{
		int sum = 0;
		for(j = 0; j < 3; j++)
		{
			sum = sum + a[i][j];
			printf(" %d", a[i][j]);
		}
		printf(" %d\n", sum);
	}
}
