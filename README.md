# Sorting Fixed-Length Social Media IDs in C

MergeSort, Quick Sort and Radix Sort implemented in C, with step-by-step traces, complexity analysis and a comparison for large fixed-length keys.

## Task
A social media application needs to sort the fixed-length IDs:

`324, 125, 456, 218, 102, 389, 275, 147`

- **(a)** Implement MergeSort, execute it on the data and record the array at each stage.
- **(b)** Implement Quick Sort, record the important partition results and the final sorted sequence.
- **(c)** Analyse both by passes/partitions, comparisons, time complexity and additional space, and decide which is more appropriate for large fixed-length keys.

## Repository structure
| Item | Location |
|---|---|
| Source code | [`src/merge_sort.c`](src/merge_sort.c), [`src/quick_sort.c`](src/quick_sort.c), [`src/radix_sort.c`](src/radix_sort.c) |
| Input data | [`input/input.txt`](input/input.txt) |
| Output | [`output/`](output/) |
| Trace tables | [`docs/trace_tables.md`](docs/trace_tables.md) |
| Complexity analysis | [`docs/complexity_analysis.md`](docs/complexity_analysis.md) |
| Comparison table | [`docs/comparison_table.md`](docs/comparison_table.md) |
| Final conclusion | [`docs/conclusion.md`](docs/conclusion.md) |

## How to run
```bash
gcc src/merge_sort.c -o merge_sort
./merge_sort < input/input.txt

gcc src/quick_sort.c -o quick_sort
./quick_sort < input/input.txt

gcc src/radix_sort.c -o radix_sort
./radix_sort < input/input.txt
```
Input format (`input/input.txt`): the first line is the number of elements, the second line is the elements.

## Results summary
| | MergeSort | Quick Sort |
|---|---|---|
| Passes / partitions | 3 | 5 |
| Comparisons | 17 | 16 |
| Time (avg / worst) | O(n log n) / O(n log n) | O(n log n) / O(n²) |
| Extra space | O(n) | O(log n) |

**Sorted output:** 102, 125, 147, 218, 275, 324, 389, 456

**Conclusion:** MergeSort is more appropriate than Quick Sort for large fixed-length keys, because it guarantees O(n log n), is stable and scales to external storage. Radix Sort is included as a reference: for fixed-length keys it runs in linear time. See [`docs/conclusion.md`](docs/conclusion.md).
