
#include <stdio.h>

int main()
{
	int LSUM = 0, RSUM = 0, i, j;
    int arr[3][3];
    
//    int arr[3][3] = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}
//    };
    
    printf("Enter the 3*3 matrix: \n");
    for (i = 0; i < 3; i++)
    {
    	for(j = 0; j< 3; j++)
    	{
    		scanf("%d",&arr[i][j]);
		}
	}
	printf("Display matrix: \n");
	 for (i = 0; i < 3; i++)
    {
    	for(j = 0; j< 3; j++)
    	{
    		printf(" %d",arr[i][j]);
		}
		printf("\n");
	}


    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                LSUM += arr[i][j];
            }

            if (j == 2 - i)
            {
                RSUM += arr[i][j];
            }
        }
    }

    printf("Left Diagonal Sum = %d\n", LSUM);
    printf("Right Diagonal Sum = %d\n", RSUM);

    return 0;
}

