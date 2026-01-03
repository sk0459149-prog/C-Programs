#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n-1];
    int sum = 0;

    printf("Enter %d numbers (from 1 to %d, one missing):\n", n-1, n);

    for(int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int missing = n * (n + 1) / 2 - sum;

    printf("Missing number = %d", missing);

    return 0;
}
