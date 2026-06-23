#include <stdio.h>

int main() {
	int n, i, j = 0;
	int arr[100];

	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("Enter %d elements: ", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++) {
		if (arr[i] != 0) {
			arr[j] = arr[i];
			j++;
		}
	}

	while (j < n) {
		arr[j] = 0;
		j++;
	}

	printf("Array after moving zeroes to end: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}