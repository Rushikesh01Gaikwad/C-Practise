
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i, sum = 0;
	printf("Enter the number to check perfect or not:\n");
	scanf("%d", &n);
	
	for(i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum = sum + i;
		}
	}
	if(sum == n)
	{
		printf("Number is Perfect");
	}
	else{
		printf("Number is not Perfect");
	}
}

//sum of its factors equals the number, 6 is called a perfect number.
