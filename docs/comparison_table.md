# Comparison Table

| Criterion | MergeSort | Quick Sort | Radix Sort (reference) |
|---|---|---|---|
| Passes / partitions (this run) | 3 passes | 5 partitions | 3 digit passes |
| Comparisons (this run) | 17 | 16 (+12 swaps) | 0 (counting only) |
| Best case | O(n log n) | O(n log n) | O(d·(n+k)) |
| Average case | O(n log n) | O(n log n) | O(d·(n+k)) |
| Worst case | O(n log n) | **O(n²)** | O(d·(n+k)) |
| Additional space | O(n) | O(log n) | O(n + k) |
| Stable | Yes | No | Yes |
| In place | No | Yes | No |
| Sensitive to input order | No | Yes (pivot choice) | No |
| Suits external / very large data | Yes | Less so | Yes |
