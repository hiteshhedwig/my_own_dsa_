Consider the following unsorted array: {64, 34, 25, 12, 22, 11, 90}.

Step 1: Starting from the first element, compare it with the next element. If the first element is greater than the second element, swap them.

```arduino

64 34 25 12 22 11 90    // First pass
34 64 25 12 22 11 90```

Step 2: Continue the comparison and swap until the last element of the array.

```arduino

34 25 64 12 22 11 90    // Second pass
25 34 64 12 22 11 90```

```arduino

25 34 12 64 22 11 90    // Third pass
25 12 34 64 22 11 90```

```arduino

25 12 34 22 64 11 90    // Fourth pass
25 12 22 34 64 11 90```

```arduino

25 12 22 34 11 64 90    // Fifth pass
25 12 22 11 34 64 90```

```arduino

25 12 22 11 34 64 90    // Sixth pass
12 25 22 11 34 64 90```

```arduino

12 22 11 25 34 64 90    // Seventh pass
12 11 22 25 34 64 90```

Step 3: Repeat the above steps until no more swapping is needed.

```arduino

11 12 22 25 34 64 90    // Sorted array```

In Bubble Sort, we start with the first element and compare it with the next element. If the first element is greater than the second element, we swap them. Then, we move on to the next pair of adjacent elements and repeat the process until we reach the end of the array.

After the first pass, the largest element is in its correct position at the end of the array. In the second pass, we compare and swap the remaining elements until the second largest element is in its correct position, and so on. We repeat this process until the entire array is sorted.
