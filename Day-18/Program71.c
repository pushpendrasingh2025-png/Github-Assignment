#include<stdio.h>
int main()
{
    int i,arr[50],n,key,pos=-1,low=0,mid,high;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements in sorted order:",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter key element:");
    scanf("%d",&key);
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==arr[mid])
        {
            pos=mid+1;
            break;
        }
        else
        if(key>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(pos==-1)
    printf("%d element is not found",key);
    else
    printf("%d element is found at %d position",key,pos);
return 0;
}