#include<stdio.h>
int main()
{
    int i,j,start,end,count=0;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for(i=start; i<=end; i++)
    {
        count=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d ", i);
            count++;
        }
    }
    
    return 0;
}