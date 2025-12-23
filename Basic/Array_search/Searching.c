#include<stdio.h>
int main()
{
    int n,key;
    int c=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
        int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Key :");
    scanf("%d",&key);
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(a[i][j]==key)
          { c++;
                printf("Element found at A%d%d \n",i+1,j+1);}
        }
    }
    printf("Frequency of key %d is : %d ",key,c);
    
}