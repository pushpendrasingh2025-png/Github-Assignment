#include<stdio.h>
int main()
{
    int i,n,j,temp,arr[20];
    printf("Enter any number:");
    scanf("%d",&n);
    printf("Enter %d values:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (arr[j]>=arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array using bubble sort technique\n");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    return 0;
}