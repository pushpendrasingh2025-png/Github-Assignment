#include<stdio.h>
int main()
{
    int array[20],i,n,max,min;
    printf("Enter number of elements in an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&array[i]);
    }
    max=min=array[0];
    for(i=0;i<n;i++)
    {
        if(array[i]>max)
            max=array[i];
        if(array[i]<min)    
            min=array[i];

    }
    printf("Maximum element in the array is %d\n",max);
    printf("Minimum element in the array is %d\n",min);
    return 0;
}