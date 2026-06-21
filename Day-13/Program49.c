#include<stdio.h>
int main()
{
    int n,array[10],i;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&array[i]);
    }
    printf("Array of %d elements are:",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}