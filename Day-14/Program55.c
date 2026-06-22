#include<stdio.h>
int main()
{
    int n,max1,max2,array[20],i;
    printf("Enter number of elements in an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&array[i]);
    }
    max1=max2=array[0];
    for(i=0;i<n;i++)
    {
        if(array[i]>max1)
        {
            max2=max1;
            max1=array[i];
        }
        else if(array[i]>max2 && array[i]!=max1)
        {
            max2=array[i];
        }
    }
    printf("Second maximum element in the array is %d\n",max2);
    return 0;
}