# Final Conclusion

On the 8 IDs, both algorithms did almost the same amount of work: MergeSort used 17 comparisons in 3 passes, and Quick Sort used 16 comparisons in 5 partitions. At this size the difference is negligible.

The theory decides it for large inputs. **MergeSort is the more appropriate choice of the two for large fixed-length keys**, for these reasons:

1. **Guaranteed O(n log n):** its running time never degrades. Quick Sort can fall to O(n²) with poor pivots, and partition 3 in our trace already shows an unbalanced split.
2. **Stable:** records with equal IDs keep their original order, which matters when sorting social-media records by several fields.
3. **Scales to external storage:** very large datasets that do not fit in memory are sorted with external MergeSort.

Quick Sort's advantages are low memory use (O(log n)) and good cache behaviour. It suits in-memory data when a good pivot strategy (random or median-of-three) is used, but it gives no worst-case guarantee.

**Note:** because every ID has the same fixed length (d = 3 digits), **Radix Sort** is the best fit overall. It runs in O(d·(n + k)) = O(n) with no comparisons, and processes the keys digit by digit, which is what the "after each digit position" wording in part (a) describes.
