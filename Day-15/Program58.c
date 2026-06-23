#include <stdio.h>

int main() {
    int n, i, first;
    int array[20];

    printf("Enter number of elements in an array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &array[i]);
    }

    first = array[0];
    for (i = 0; i < n - 1; i++) {
        array[i] = array[i + 1];
    }
    array[n - 1] = first;

    printf("Array after left rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}