#include<stdio.h>
int main()
{
    int n,x[20],i,key;
    printf("Enter number of elements in an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&x[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(x[i]==key)
        {
            printf("%d is found at position %d",key,i+1);
            break;
        }

    }
    if(i==n)
        printf("%d is not found in the array",key);
    return 0;
}