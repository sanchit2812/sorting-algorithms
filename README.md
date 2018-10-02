# sorting-algorithms

This project has the objective of studying sorting algorithms and C++.

It is a simple program that prompts the user to input the number of elements that will be stored in a dynamically allocated array, to input the way that it is ordered (i.e. Crescent, Decrescent or Random) and to input the sorting algorithm.

Finally the program outputs the time consumed just to sort the array.

## Currently included sorting algorithms:
- [bubble sort](https://en.wikipedia.org/wiki/Bubble_sort)

A slow simple comparison sorting algorithm that repeatedly steps through the list to be sorted, compares each pair of adjacent items and swaps them if they are in the wrong order. 

- [insertion sort](https://en.wikipedia.org/wiki/Insertion_sort)

Aimple sorting algorithm that builds the sorted array one element at a time, creating a sorted list every iteration before adding a new element.

- [selection sort](https://en.wikipedia.org/wiki/Selection_sort)

Another simple in-place comparison sort, creating a sorted list every iteration and then finding  the smallest (or largest, depending on sorting order) element in the unsorted sublist to insert in the sorted iteration. 


- [quicksort](https://en.wikipedia.org/wiki/Quicksort)

One of the more efficient comparison sorts, very similar to selection sort. 

- [MergeSort](https://en.wikipedia.org/wiki/Merge_sort)

A divide and conquer based Sorting technique, preserves the input order of equal elements in the sorted output(stable).

- [Heapsort](https://en.wikipedia.org/wiki/Heapsort)

A comparison-based sorting algorithm that divides its input into a sorted and an unsorted region, and it iteratively shrinks the unsorted region by extracting the largest element and moving that to the sorted region. The improvement consists of the use of a heap data structure rather than a linear-time search to find the maximum
