//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n+1];   // +1 for the new element
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    int i;
    for (i = n - 1; i >= 0 && arr[i] > x; i--) {
        arr[i + 1] = arr[i];   // shift elements to the right
    }
    arr[i + 1] = x;            // insert element

    for (int j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }
    return 0;
}