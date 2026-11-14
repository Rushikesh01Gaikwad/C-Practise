
#include <stdio.h>

int main()
{
    int a[5], i, j, temp, diff;

    printf("Enter the 5 values in array: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sort array in ascending order
    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nSorted array: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nMissing elements are:\n");

    for(i = 0; i < 4; i++)
    {
        diff = a[i+1] - a[i];

        if(diff > 1)
        {
            for(j = a[i] + 1; j < a[i+1]; j++)
            {
                printf("%d ", j);
            }
        }
    }

    return 0;
}

