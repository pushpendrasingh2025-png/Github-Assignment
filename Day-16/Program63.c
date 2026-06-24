#include<stdio.h>
int main()
{
    int i,n,j,sum,found=0,arr[20];
     printf("Enter number of elements: ");
     scanf("%d", &n);
     printf("Enter %d element:",n);
     for(i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     printf("Enter given sum:");
     scanf("%d",&sum);
     for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("Pair found: %d and %d\n",arr[i],arr[j]);
                found=1;
            }
        }
      }
     if(found==0)
     {
        printf("No pair found");
     }
     return 0;
}
