/* Quick Sort (Lomuto partition, last element = pivot) - prints every partition */
#include <stdio.h>

int n, cmp = 0, swaps = 0, part = 0;

void print(int a[]) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

void quickSort(int a[], int lo, int hi) {
    if (lo < hi) {
        int p = a[hi], i = lo - 1, t;
        for (int j = lo; j < hi; j++) {
            cmp++;
            if (a[j] <= p) { i++; t = a[i]; a[i] = a[j]; a[j] = t; swaps++; }
        }
        t = a[i + 1]; a[i + 1] = a[hi]; a[hi] = t; swaps++;
        printf("Partition %d (pivot %d): ", ++part, p); print(a);
        quickSort(a, lo, i);
        quickSort(a, i + 2, hi);
    }
}

int main() {
    int a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("QUICK SORT\nInput : "); print(a);
    quickSort(a, 0, n - 1);
    printf("Sorted: "); print(a);
    printf("Partitions: %d, Comparisons: %d, Swaps: %d\n", part, cmp, swaps);
    return 0;
}
