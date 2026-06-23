#include <stdio.h>

int main() 
{
	int n, i, temp;
	int arr[100];

	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("Enter %d elements: ", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i<n; i++)
       {
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	    }

	printf("Reversed array: ");
	for (i = 0; i < n; i++)
     {
		printf("%d ", arr[i]);
     }

	return 0;
}
