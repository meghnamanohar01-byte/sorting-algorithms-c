/* MergeSort (bottom-up) - prints the array after every merge pass */
#include <stdio.h>

int n, cmp = 0;

void print(int a[]) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

void merge(int a[], int l, int m, int r) {
    int t[100], i = l, j = m, k = 0;
    while (i < m && j < r) {
        cmp++;
        if (a[i] <= a[j]) t[k++] = a[i++];
        else              t[k++] = a[j++];
    }
    while (i < m) t[k++] = a[i++];
    while (j < r) t[k++] = a[j++];
    for (i = 0; i < k; i++) a[l + i] = t[i];
}

int main() {
    int a[100], pass = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("MERGE SORT\nInput : "); print(a);
    for (int size = 1; size < n; size *= 2, pass++) {
        for (int l = 0; l < n - size; l += 2 * size) {
            int m = l + size;
            int r = (l + 2 * size < n) ? l + 2 * size : n;
            merge(a, l, m, r);
        }
        printf("Pass %d (size %d -> %d): ", pass, size, 2 * size); print(a);
    }
    printf("Sorted: "); print(a);
    printf("Passes: %d, Comparisons: %d\n", pass - 1, cmp);
    return 0;
}
