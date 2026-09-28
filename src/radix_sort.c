/* LSD Radix Sort - prints the array after each digit position is processed */
#include <stdio.h>

int n;

void print(int a[]) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int a[100], out[100], max, pass = 0;
    char *name[] = {"Units", "Tens", "Hundreds", "Thousands"};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("RADIX SORT\nInput : "); print(a);
    max = a[0];
    for (int i = 1; i < n; i++) if (a[i] > max) max = a[i];

    for (int exp = 1; max / exp > 0; exp *= 10) {
        int count[10] = {0};
        for (int i = 0; i < n; i++) count[(a[i] / exp) % 10]++;
        for (int k = 1; k < 10; k++) count[k] += count[k - 1];
        for (int i = n - 1; i >= 0; i--) out[--count[(a[i] / exp) % 10]] = a[i];
        for (int i = 0; i < n; i++) a[i] = out[i];
        printf("After %s digit: ", name[pass]); print(a);
        pass++;
    }
    printf("Sorted: "); print(a);
    printf("Passes: %d, Comparisons: 0\n", pass);
    return 0;
}
