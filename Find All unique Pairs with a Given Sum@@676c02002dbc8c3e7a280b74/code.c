#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void findPairs(int arr[], int n, int target) {
    qsort(arr, n, sizeof(int), compare);  // Sorting the array: O(n log n)

    int left = 0, right = n - 1;
    
    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("%d %d\n", arr[left], arr[right]);
            left++;  // Move left pointer forward
            right--; // Move right pointer backward to avoid duplicates
        } 
        else if (sum < target) {
            left++;  // Increase sum by moving left pointer
        } 
        else {
            right--; // Decrease sum by moving right pointer
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int t;
    scanf("%d", &t);

    findPairs(arr, n, t);

    return 0;
}
