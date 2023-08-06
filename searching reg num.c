#include <stdio.h>

int searchNumber(int arr[], int n, int searchNum) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == searchNum) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int n, i, searchNum;
    
    printf("Enter the number of registered numbers: ");
    scanf("%d", &n);
    
    int registeredNumbers[n];
    
    printf("Enter the registered numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &registeredNumbers[i]);
    }
    
    printf("Enter the number to search: ");
    scanf("%d", &searchNum);
    
    int foundIndex = searchNumber(registeredNumbers, n, searchNum);
    
    if (foundIndex != -1) {
        printf("Number %d is found at index %d.\n", searchNum, foundIndex);
    } else {
        printf("Number %d is not found in the registered numbers.\n", searchNum);
    }
    
    return 0;
}
