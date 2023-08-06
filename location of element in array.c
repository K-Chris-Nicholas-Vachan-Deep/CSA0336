#include <stdio.h>

int main() {
    int n, i, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its location: ");
    scanf("%d", &element);

    int found = 0;
    int location = -1;

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = 1;
            location = i;
            break;
        }
    }

    if (found) {
        printf("Element %d found at index %d.\n", element, location);
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}
