#include<stdio.h>
int main()
{
    int start,end,i;
    printf("Enter the starting number: ");
    scanf("%d",&start);
    printf("Enter the ending number: ");
    scanf("%d",&end);
    printf("Prime numbers between %d and %d are:\n", start, end);
    for( i=start; i<=end; i++) {
    if (i <= 1) {
        continue;
    }
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime==1) {
            printf("%d ", i);
        }
    }
    return 0;
}