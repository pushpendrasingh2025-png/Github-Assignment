#include<stdio.h>
int main()
{
    int n,target,count=0;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elements in the array:\n",n);  
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the element to find its frequency:");
    scanf("%d",&target);
    for(int i=0;i<n;i++)
    {
        if(array[i]==target)
        {
            count++;
        }
    }
    printf("The element %d occurs %d times in the array.",target,count);
    return 0;
}