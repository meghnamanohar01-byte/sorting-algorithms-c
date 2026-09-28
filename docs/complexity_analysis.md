# Complexity Analysis

n = number of keys (8), d = digits per key (3), k = digit range (10)

## MergeSort
- **Passes:** ⌈log₂ n⌉ = log₂ 8 = **3** merge passes.
- **Comparisons (this run):** 4 + 6 + 7 = **17**. Each pass does at most n − 1 comparisons, so the total is at most n·log₂ n = 24.
- **Time complexity:** best, average and worst are all **O(n log n)**. The list is always split in half, whatever the input order.
- **Additional space:** **O(n)** for the temporary merge array.
- **Stable:** yes (equal keys keep their order).

## Quick Sort
- **Partitions (this run):** **5**, with recursion depth 4.
- **Comparisons (this run):** 7 + 1 + 4 + 3 + 1 = **16**, plus 12 swaps.
- **Time complexity:**
  - Best / average: **O(n log n)**, when pivots split the array roughly in half.
  - Worst: **O(n²)**, when the pivot is always the smallest or largest element (e.g. already-sorted input with a last-element pivot). The worst case needs n(n−1)/2 = 28 comparisons for n = 8.
- **Additional space:** **O(log n)** recursion stack on average, O(n) in the worst case. It sorts in place.
- **Stable:** no.

## Radix Sort (reference: digit-by-digit method)
- **Passes:** d = **3** (units, tens, hundreds).
- **Major operations:** no key comparisons. Each pass does a counting sort costing O(n + k).
- **Time complexity:** **O(d·(n + k))**. With fixed-length keys, d and k are constants, so this is **O(n)**.
- **Additional space:** **O(n + k)** for the output array and count array.
- **Stable:** yes (each pass must be stable).
