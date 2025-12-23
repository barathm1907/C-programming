#include<stdio.h>
int main()
{
    int a[100];
    printf("Enter number of elements: ");
    int n;
    scanf("%d", &n);   
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                break;
            }
        }
        if (j == i)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
    