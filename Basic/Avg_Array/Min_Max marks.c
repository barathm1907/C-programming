#include<stdio.h>
int main()
{
    int arr[20];
    int n,avg=0,sum=0;
    printf("How many Subjects : ");
     scanf("%d",&n);
     printf("Enter the marks : ");
    for(int i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("Sum is %d and Avg is : %d",sum,avg);


    printf("\n Minimum Marks :");
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf(" %d",min);
    int max=arr[0];
    printf("\n Maximum Marks :");
     for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf(" %d",max);
    printf("\n Repeated Marks :");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf(" %d",arr[i]);
            }
        }
    }
  

    printf("\n The Marks are : ");
   for(int i=0;i<n;i++)
    {
         printf(" %d",arr[i]);
    }
}