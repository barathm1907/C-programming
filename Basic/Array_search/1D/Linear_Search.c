#include <stdio.h>
int main()
{
    int a[100];
    printf("Enter number of elements: ");
    int n;
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    int element;
    int c=0;
    printf("Enter element to search: ");
    scanf("%d", &element);
    for(int i=0;i<n;i++)
    {
        if(a[i]==element)
        {
            printf("Element found at index %d\n", i);
            c++;
                      printf("Frequency of %d is %d\n", element, c);
        }
    }
  
return 0;
}