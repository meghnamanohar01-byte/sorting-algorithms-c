# Trace Tables

**Input:** 324, 125, 456, 218, 102, 389, 275, 147  (n = 8, each key has d = 3 digits)

## 1. MergeSort trace (bottom-up)

| Pass | Merge operations | Array after pass | Comparisons |
|---|---|---|---|
| Start | – | 324, 125, 456, 218, 102, 389, 275, 147 | – |
| 1 (size 1 → 2) | [324]+[125], [456]+[218], [102]+[389], [275]+[147] | [125, 324] [218, 456] [102, 389] [147, 275] | 4 |
| 2 (size 2 → 4) | [125,324]+[218,456], [102,389]+[147,275] | [125, 218, 324, 456] [102, 147, 275, 389] | 6 |
| 3 (size 4 → 8) | [125,218,324,456]+[102,147,275,389] | **102, 125, 147, 218, 275, 324, 389, 456** | 7 |
| **Total** | | | **17** |

> Note: the assignment asks for the array "after each digit position is processed". MergeSort does not process digits; it works in merge passes, so the array is recorded after each pass. A digit-by-digit trace is given for Radix Sort in section 3.

## 2. Quick Sort trace (Lomuto partition, pivot = last element)

| Partition | Sub-array | Pivot | Result (left \| pivot \| right) | Array after partition | Comparisons |
|---|---|---|---|---|---|
| 1 | [324, 125, 456, 218, 102, 389, 275, 147] | 147 | [125, 102] \| **147** \| [218, 324, 389, 275, 456] | 125, 102, 147, 218, 324, 389, 275, 456 | 7 |
| 2 | [125, 102] | 102 | [] \| **102** \| [125] | 102, 125, 147, 218, 324, 389, 275, 456 | 1 |
| 3 | [218, 324, 389, 275, 456] | 456 | [218, 324, 389, 275] \| **456** \| [] | 102, 125, 147, 218, 324, 389, 275, 456 | 4 |
| 4 | [218, 324, 389, 275] | 275 | [218] \| **275** \| [389, 324] | 102, 125, 147, 218, 275, 389, 324, 456 | 3 |
| 5 | [389, 324] | 324 | [] \| **324** \| [389] | 102, 125, 147, 218, 275, 324, 389, 456 | 1 |
| **Total** | | | | | **16** (12 swaps) |

**Final sorted sequence:** 102, 125, 147, 218, 275, 324, 389, 456

Partition 3 is unbalanced (all remaining elements fall on one side), which is the pattern that leads to Quick Sort's O(n²) worst case.

## 3. Radix Sort trace (LSD, digit by digit)

| Digit position processed | Digit used for each key | Array after pass |
|---|---|---|
| Start | – | 324, 125, 456, 218, 102, 389, 275, 147 |
| Units (10⁰) | 4, 5, 6, 8, 2, 9, 5, 7 | 102, 324, 125, 275, 456, 147, 218, 389 |
| Tens (10¹) | 0, 2, 2, 7, 5, 4, 1, 8 | 102, 218, 324, 125, 147, 456, 275, 389 |
| Hundreds (10²) | 1, 2, 3, 1, 1, 4, 2, 3 | **102, 125, 147, 218, 275, 324, 389, 456** |
