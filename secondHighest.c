#include<stdio.h>

void main()
{
    int a[5], i;
    int max, second;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    max = second = a[0];

    for(i = 0; i < 5; i++)
    {
        if(a[i] > max)
        {
            second = max;
            max = a[i];
        }
        else if(a[i] > second && a[i] != max)
        {
            second = a[i];
        }
    }

    printf("Second highest number is: %d", second);
}
